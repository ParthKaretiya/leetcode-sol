// Last updated: 24/04/2026, 09:57:38

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            mp[nums[i]] = i;
        }

        return {};
    }
};