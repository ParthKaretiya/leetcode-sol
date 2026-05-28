// Last updated: 28/05/2026, 10:16:22
1class Solution {
2public:
3    int numberOfMatches(int n) {
4
5        int matches = 0;
6
7        while(n > 1) {
8
9            matches += n / 2;
10
11            n = (n / 2) + (n % 2);
12        }
13
14        return matches;
15    }
16};