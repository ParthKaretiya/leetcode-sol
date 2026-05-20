// Last updated: 20/05/2026, 17:25:19
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        
5        int count = 0;
6
7        for (int num : nums) {
8
9            int digits = 0;
10
11            while (num > 0) {
12                digits++;
13                num /= 10;
14            }
15
16            if (digits % 2 == 0) {
17                count++;
18            }
19        }
20
21        return count;
22    }
23};