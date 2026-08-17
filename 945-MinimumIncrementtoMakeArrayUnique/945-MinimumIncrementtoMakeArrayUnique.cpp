// Last updated: 17/08/2026, 13:19:25
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int ans = 0;
8
9        for (int i = 1; i < nums.size(); i++) {
10
11            if (nums[i] <= nums[i - 1]) {
12                int newValue = nums[i - 1] + 1;
13
14                ans += newValue - nums[i];
15
16                nums[i] = newValue;
17            }
18        }
19
20        return ans;
21    }
22};