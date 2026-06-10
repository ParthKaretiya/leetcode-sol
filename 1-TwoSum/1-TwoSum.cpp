// Last updated: 11/06/2026, 01:26:44
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int rem = target - nums[i];
8
9            if (mp.find(rem) != mp.end()) {
10                return {mp[rem], i};
11            }
12
13            mp[nums[i]] = i;
14        }
15
16        return {};
17    }
18};