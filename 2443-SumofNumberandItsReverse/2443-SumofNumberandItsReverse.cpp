// Last updated: 21/05/2026, 12:08:11
1class Solution {
2public:
3    bool sumOfNumberAndReverse(int num) {
4
5        for(int i = 0; i <= num; i++) {
6
7            int sum = 0;
8            int x = i;
9
10            // reverse x
11            while(x > 0) {
12
13                int rem = x % 10;
14
15                sum = sum * 10 + rem;
16
17                x = x / 10;
18            }
19
20            // check condition
21            if(i + sum == num) {
22                return true;
23            }
24        }
25
26        return false;
27    }
28};