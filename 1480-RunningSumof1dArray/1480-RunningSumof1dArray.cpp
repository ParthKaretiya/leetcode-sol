// Last updated: 14/05/2026, 10:49:41
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4
5        for(int i = 1; i < nums.size(); i++){
6            nums[i] = nums[i] + nums[i - 1];
7        }
8
9        return nums;
10    }
11};