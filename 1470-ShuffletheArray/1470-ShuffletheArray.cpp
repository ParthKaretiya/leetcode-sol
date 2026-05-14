// Last updated: 14/05/2026, 10:56:33
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4
5        vector<int> ans;
6
7        for(int i = 0; i < n; i++){
8
9            ans.push_back(nums[i]);
10            ans.push_back(nums[i + n]);
11        }
12
13        return ans;
14    }
15};