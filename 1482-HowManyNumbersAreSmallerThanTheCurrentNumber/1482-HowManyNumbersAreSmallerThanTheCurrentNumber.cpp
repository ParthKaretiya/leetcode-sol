// Last updated: 7/13/2026, 1:18:52 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> temp = nums;

        sort(temp.begin(), temp.end());

        unordered_map<int, int> mp;

        // store first position
        for(int i = 0; i < temp.size(); i++) {

            if(mp.find(temp[i]) == mp.end()) {
                mp[temp[i]] = i;
            }
        }

        vector<int> ans;

        for(int x : nums) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};