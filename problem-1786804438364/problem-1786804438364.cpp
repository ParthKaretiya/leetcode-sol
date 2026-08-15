// Last updated: 8/15/2026, 8:03:58 PM
1class Solution {
2public:
3    int minOperations(string s) {
4        int n = s.size();
5        int ans = INT_MAX;
6
7        for (int shift = 0; shift < n; shift++) {
8            int cost = shift;
9
10            for (int i = 0; i < n / 2; i++) {
11                int a = s[(i + shift) % n] - 'a';
12                int b = s[(n - 1 - i + shift) % n] - 'a';
13
14                int best = INT_MAX;
15
16                for (int target = 0; target < 26; target++) {
17                    int x = (target - a + 26) % 26;
18                    int y = (target - b + 26) % 26;
19                    best = min(best, x + y);
20                }
21
22                cost += best;
23            }
24
25            ans = min(ans, cost);
26        }
27
28        return ans;
29    }
30};