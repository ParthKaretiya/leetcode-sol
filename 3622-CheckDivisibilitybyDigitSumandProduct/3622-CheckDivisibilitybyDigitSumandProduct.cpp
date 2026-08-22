// Last updated: 8/22/2026, 11:34:48 AM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int original = n;
5        int sum = 0;
6        int product = 1;
7
8        while (n > 0) {
9            int digit = n % 10;
10
11            sum += digit;
12            product *= digit;
13
14            n /= 10;
15        }
16
17        return original % (sum + product) == 0;
18    }
19};