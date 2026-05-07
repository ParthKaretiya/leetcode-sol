// Last updated: 07/05/2026, 19:24:12
1class Solution {
2public:
3    int climbStairs(int n) {
4        if(n<= 2)
5        return n;
6        int a = 1;
7        int b = 2;
8        for(int i=3 ;i<=n;i++){
9            int c = a + b ;
10            a = b;
11            b = c;
12        }
13        return b;
14    }
15};