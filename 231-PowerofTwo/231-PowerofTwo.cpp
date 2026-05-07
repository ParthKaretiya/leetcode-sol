// Last updated: 07/05/2026, 19:35:41
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        if(n<1)
5        return 0;
6        while(n!=1){
7            if(n%2 == 1){
8                return 0;
9            }
10            n = n/2;
11        }
12        return 1;
13    }
14};