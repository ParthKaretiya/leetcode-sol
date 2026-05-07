// Last updated: 07/05/2026, 17:15:21
1class Solution {
2public:
3    vector<int> intersection(vector<vector<int>>& nums) {
4
5        unordered_map<int, int> mp;
6
7        // count frequency
8        for (auto arr : nums) {
9
10            for (int x : arr) {
11                mp[x]++;
12            }
13        }
14
15        vector<int> ans;
16
17        // present in all arrays
18        for (auto it : mp) {
19
20            if (it.second == nums.size()) {
21                ans.push_back(it.first);
22            }
23        }
24
25        sort(ans.begin(), ans.end());
26
27        return ans;
28    }
29};