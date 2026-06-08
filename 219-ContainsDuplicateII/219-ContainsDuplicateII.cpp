// Last updated: 08/06/2026, 10:26:10
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        
5        unordered_map<int,int> mp;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            if(mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <= k) {
10                return true;
11            }
12
13            mp[nums[i]] = i;
14        }
15
16        return false;
17    }
18};