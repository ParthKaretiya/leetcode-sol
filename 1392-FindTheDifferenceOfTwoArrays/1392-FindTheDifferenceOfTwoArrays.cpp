// Last updated: 21/05/2026, 11:09:15
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp1, mp2;

        // store nums1
        for (int x : nums1) {
            mp1[x]++;
        }

        // store nums2
        for (int x : nums2) {
            mp2[x]++;
        }

        vector<int> v1, v2;

        // elements only in nums1
        for (auto it : mp1) {

            int num = it.first;

            if (!mp2[num]) {
                v1.push_back(num);
            }
        }

        // elements only in nums2
        for (auto it : mp2) {

            int num = it.first;

            if (!mp1[num]) {
                v2.push_back(num);
            }
        }

        return {v1, v2};
    }
};