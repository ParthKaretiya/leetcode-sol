// Last updated: 05/05/2026, 15:23:07
1class Solution {
2public:
3    bool isHappy(int n) {
4        set<int> seen;
5
6        while (n != 1 && seen.count(n) == 0) {
7            seen.insert(n);
8
9            int sum = 0;
10            while (n > 0) {
11                int d = n % 10;
12                sum += d * d;
13                n /= 10;
14            }
15
16            n = sum;
17        }
18
19        return n == 1;
20    }
21};