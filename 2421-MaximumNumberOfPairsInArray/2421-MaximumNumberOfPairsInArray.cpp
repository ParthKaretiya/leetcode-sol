// Last updated: 21/05/2026, 11:08:24
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {

        unordered_map<int,int> mp;

        // count frequency
        for (int x : nums) {
            mp[x]++;
        }

        int pairs = 0;
        int left = 0;

        for (auto it : mp) {

            pairs += it.second / 2;

            left += it.second % 2;
        }

        return {pairs, left};
    }
};