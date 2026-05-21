// Last updated: 21/05/2026, 10:03:52
1class Solution {
2public:
3    int countDigits(int num) {
4        int sum = 0;
5        int dup = num ;
6        while(dup>0){
7            int rem = dup%10;
8            if(num%rem ==0){
9                sum ++;
10            }
11            dup = dup/10;
12        }
13        return sum;
14    }
15};