// Last updated: 24/05/2026, 14:58:43
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n<=0){
5            return false;
6        }
7        while(n%4==0){
8            n= n/4;
9        }
10
11        return n==1;
12    }
13};