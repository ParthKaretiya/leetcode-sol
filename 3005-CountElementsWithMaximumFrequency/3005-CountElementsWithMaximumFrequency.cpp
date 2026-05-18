// Last updated: 18/05/2026, 17:45:08
1class Solution {
2public:
3    int maxFrequencyElements(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        int maxiFreq = 0;
7
8        // Count frequency
9        for (int num : nums) {
10            mp[num]++;
11            maxiFreq = max(maxiFreq, mp[num]);
12        }
13
14        int ans = 0;
15
16        // Count elements having maximum frequency
17        for (auto it : mp) {
18            if (it.second == maxiFreq) {
19                ans += it.second;
20            }
21        }
22
23        return ans;
24    }
25};