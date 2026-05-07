// Last updated: 07/05/2026, 10:08:56
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = 0;

        for (int x : nums) {
            count += mp[x];  // add how many times seen before
            mp[x]++;         // store current
        }

        return count;
    }
};