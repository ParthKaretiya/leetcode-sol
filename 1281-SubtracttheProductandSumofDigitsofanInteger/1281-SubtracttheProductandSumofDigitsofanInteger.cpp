// Last updated: 21/05/2026, 09:44:52
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int sum = 0;
5        int product = 1;
6
7        while(n>0){
8            int rem = n%10;
9            sum = rem + sum ;
10            product = product * rem ;
11            n = n/10;
12        }
13
14        int ans = product - sum;
15
16        return ans ;
17    }
18};