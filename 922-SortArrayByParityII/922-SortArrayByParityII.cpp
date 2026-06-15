// Last updated: 15/06/2026, 13:54:22
1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6
7        int even = 0;
8        int odd = 1;
9
10        for (int num : nums) {
11            if (num % 2 == 0) {
12                ans[even] = num;
13                even += 2;
14            } else {
15                ans[odd] = num;
16                odd += 2;
17            }
18        }
19
20        return ans;
21    }
22};