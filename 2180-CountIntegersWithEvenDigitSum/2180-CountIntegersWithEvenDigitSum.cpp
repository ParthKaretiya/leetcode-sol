// Last updated: 20/05/2026, 17:35:50
1class Solution {
2public:
3    int countEven(int num) {
4
5        int count = 0;
6
7        for (int i = 1; i <= num; i++) {
8
9            int n = i;
10            int sum = 0;
11
12            // Find digit sum
13            while (n > 0) {
14                sum += n % 10;
15                n /= 10;
16            }
17
18            // Check even sum
19            if (sum % 2 == 0) {
20                count++;
21            }
22        }
23
24        return count;
25    }
26};