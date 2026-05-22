// Last updated: 22/05/2026, 20:42:37
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp1, mp2;

        // store freq of nums1
        for (int x : nums1) {
            mp1[x]++;
        }

        // store freq of nums2
        for (int x : nums2) {
            mp2[x]++;
        }

        vector<int> ans;

        // check common numbers
        for (auto it : mp1) {

            int num = it.first;

            if (mp2[num]) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};