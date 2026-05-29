// Last updated: 29/05/2026, 11:06:02
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int num1 = 0;
5        int num2 = 0;
6
7        for(int i = 1; i <= n; i++) {
8            if(i % m == 0) {
9                num2 += i;
10            } else {
11                num1 += i;
12            }
13        }
14
15        return num1 - num2;
16    }
17};