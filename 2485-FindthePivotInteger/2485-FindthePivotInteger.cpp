// Last updated: 22/05/2026, 20:32:25
1class Solution {
2public:
3    int pivotInteger(int n) {
4        
5        int total = (n * (n + 1)) / 2;
6        int leftSum = 0;
7
8        for(int x = 1; x <= n; x++) {
9            
10            leftSum += x;
11
12            int rightSum = total - leftSum + x;
13
14            if(leftSum == rightSum) {
15                return x;
16            }
17        }
18
19        return -1;
20    }
21};