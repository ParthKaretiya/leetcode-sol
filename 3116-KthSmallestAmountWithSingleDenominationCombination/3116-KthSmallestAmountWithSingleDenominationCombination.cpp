// Last updated: 8/21/2026, 10:15:05 AM
1class Solution {
2public:
3    long long gcd(long long a, long long b) {
4        while (b) {
5            long long t = a % b;
6            a = b;
7            b = t;
8        }
9        return a;
10    }
11
12    long long lcm(long long a, long long b) {
13        return a / gcd(a, b) * b;
14    }
15
16    long long findKthSmallest(vector<int>& coins, int k) {
17        int n = coins.size();
18
19        auto count = [&](long long x) {
20            long long ans = 0;
21
22            for (int mask = 1; mask < (1 << n); mask++) {
23                long long L = 1;
24                int bits = 0;
25
26                for (int i = 0; i < n; i++) {
27                    if (mask & (1 << i)) {
28                        bits++;
29
30                        L = lcm(L, coins[i]);
31
32                        if (L > x)
33                            break;
34                    }
35                }
36
37                if (L > x)
38                    continue;
39
40                long long ways = x / L;
41
42                if (bits & 1)
43                    ans += ways;
44                else
45                    ans -= ways;
46            }
47
48            return ans;
49        };
50
51        long long lo = 1;
52        long long hi = 1LL * (*min_element(coins.begin(), coins.end())) * k;
53
54        while (lo < hi) {
55            long long mid = lo + (hi - lo) / 2;
56
57            if (count(mid) >= k)
58                hi = mid;
59            else
60                lo = mid + 1;
61        }
62
63        return lo;
64    }
65};