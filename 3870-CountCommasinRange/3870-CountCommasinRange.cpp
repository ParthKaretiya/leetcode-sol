// Last updated: 9/8/2026, 9:18:36 AM
1class Solution {
2public:
3    int countCommas(int n) {
4        int count = 0;
5
6        for (int i = 1; i <= n; i++) {
7            if (i >= 1000) {
8                count++;
9            }
10        }
11
12        return count;
13    }
14};