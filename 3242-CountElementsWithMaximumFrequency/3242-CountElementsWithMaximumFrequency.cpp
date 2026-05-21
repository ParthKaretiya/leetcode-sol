// Last updated: 21/05/2026, 11:07:39
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        int maxiFreq = 0;

        // Count frequency
        for (int num : nums) {
            mp[num]++;
            maxiFreq = max(maxiFreq, mp[num]);
        }

        int ans = 0;

        // Count elements having maximum frequency
        for (auto it : mp) {
            if (it.second == maxiFreq) {
                ans += it.second;
            }
        }

        return ans;
    }
};