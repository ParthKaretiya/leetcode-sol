// Last updated: 21/05/2026, 11:09:32
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,int> mp;

        // count frequency
        for(int x : nums) {
            mp[x]++;
        }

        vector<int> ans;

        // find duplicates
        for(auto x : mp) {

            if(x.second > 1) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};