// Last updated: 13/06/2026, 11:43:22
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int sum = 0;
5
6        while (n > 0) {
7            sum += n % 10;
8            n /= 10;
9        }
10
11        return sum;
12    }
13};