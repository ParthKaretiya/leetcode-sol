// Last updated: 7/13/2026, 1:23:03 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            if(mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <= k) {
                return true;
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};