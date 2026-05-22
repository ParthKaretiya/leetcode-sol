// Last updated: 22/05/2026, 20:35:39
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        
5        int sum = 0;
6
7        for(int i = 1; i <= n; i++) {
8            
9            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
10                sum += i;
11            }
12        }
13
14        return sum;
15    }
16};