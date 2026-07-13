// Last updated: 7/13/2026, 1:18:18 PM
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> mp;

        // count frequency
        for(int x : nums) {
            mp[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {

            if(mp[a] == mp[b]) {
                return a > b;
            }

            return mp[a] < mp[b];
        });

        return nums;
    }
};