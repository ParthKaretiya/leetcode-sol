// Last updated: 15/06/2026, 13:47:18
1class Solution {
2public:
3    int maximumDifference(vector<int>& nums) {
4        int mini = nums[0];
5        int ans = -1;
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] > mini) {
9                ans = max(ans, nums[i] - mini);
10            }
11
12            mini = min(mini, nums[i]);
13        }
14
15        return ans;
16    }
17};