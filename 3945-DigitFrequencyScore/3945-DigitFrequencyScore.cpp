// Last updated: 14/06/2026, 14:26:20
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int sum = 0;
5        while(n>0){
6            sum = sum + n%10;
7            n =n/10;
8        }
9        return sum ;
10    }
11};