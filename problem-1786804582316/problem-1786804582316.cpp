// Last updated: 8/15/2026, 8:06:22 PM
1class Solution {
2public:
3    int kthDigit(long long k) {
4        if (k <= 9) return k;
5
6        k -= 9;
7
8        long long start = 1;
9        long long blocks = 9;
10
11        for (int d = 2; ; d++) {
12            long long blockDigits = 10LL * d;
13            long long total = blocks * blockDigits;
14
15            if (k > total) {
16                k -= total;
17                start *= 10;
18                blocks *= 10;
19            } else {
20                long long b = start + (k - 1) / blockDigits;
21                long long pos = (k - 1) % blockDigits;
22
23                long long offset = pos / d;
24                int digit = pos % d;
25
26                if (b % 2 == 0)
27                    b = b * 10 + offset;
28                else
29                    b = b * 10 + (9 - offset);
30
31                return to_string(b)[digit] - '0';
32            }
33        }
34    }
35};