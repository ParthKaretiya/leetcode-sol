// Last updated: 08/05/2026, 12:02:14
1class Solution {
2public:
3    vector<int> numberOfPairs(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6
7        // count frequency
8        for (int x : nums) {
9            mp[x]++;
10        }
11
12        int pairs = 0;
13        int left = 0;
14
15        for (auto it : mp) {
16
17            pairs += it.second / 2;
18
19            left += it.second % 2;
20        }
21
22        return {pairs, left};
23    }
24};