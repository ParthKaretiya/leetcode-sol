// Last updated: 22/05/2026, 20:42:35
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;

        // count nums1 frequency
        for(int x : nums1) {
            mp[x]++;
        }

        vector<int> ans;

        // check nums2
        for(int x : nums2) {

            // common element exists
            if(mp[x] > 0) {

                ans.push_back(x);

                // decrease frequency
                mp[x]--;
            }
        }

        return ans;
    }
};