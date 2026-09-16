// Last updated: 9/16/2026, 3:52:14 PM
1class Solution {
2public:
3    static const long long MOD = 1000000007LL;
4
5    long long modPow(long long base, long long exp) {
6        long long result = 1;
7
8        while (exp > 0) {
9            if (exp & 1LL) {
10                result = result * base % MOD;
11            }
12
13            base = base * base % MOD;
14
15            exp >>= 1LL;
16        }
17
18        return result;
19    }
20
21    int numberOfSets(int n, int k) {
22        long long N = n + k - 1;
23        long long R = 2LL * k;
24
25        R = min(R, N - R);
26
27        long long numerator = 1;
28        long long denominator = 1;
29
30        for (long long i = 1; i <= R; ++i) {
31            numerator = numerator * (N - R + i) % MOD;
32
33            denominator = denominator * i % MOD;
34        }
35
36        long long inverseDenominator = modPow(denominator, MOD - 2);
37
38        return static_cast<int>(numerator * inverseDenominator % MOD);
39    }
40};