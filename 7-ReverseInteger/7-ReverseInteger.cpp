// Last updated: 10/05/2026, 20:13:13
1class Solution {
2public:
3    int reverse(int x) {
4        int sum = 0;
5
6        while (x != 0) {
7            int rem = x % 10;
8
9           
10            if (sum > INT_MAX / 10 || sum < INT_MIN / 10) {
11                return 0;
12            }
13
14            sum = sum * 10 + rem;
15            x /= 10;
16        }
17
18        return sum;
19    }
20};