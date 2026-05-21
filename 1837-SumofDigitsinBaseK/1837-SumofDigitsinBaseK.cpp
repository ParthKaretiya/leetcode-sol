// Last updated: 21/05/2026, 11:42:59
1class Solution {
2public:
3    int sumBase(int n, int k) {
4
5        int sum = 0;
6
7        while(n > 0) {
8
9            int rem = n % k;
10
11            sum += rem;
12
13            n = n / k;
14        }
15
16        return sum;
17    }
18};
19