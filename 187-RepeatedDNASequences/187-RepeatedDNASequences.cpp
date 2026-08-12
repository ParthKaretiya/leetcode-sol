// Last updated: 8/12/2026, 2:17:43 PM
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        unordered_map<string, int> mp;
5        vector<string> ans;
6
7        for (int i = 0; i + 10 <= s.size(); i++) {
8            string sub = s.substr(i, 10);
9            mp[sub]++;
10        }
11
12        for (auto it : mp) {
13            if (it.second > 1)
14                ans.push_back(it.first);
15        }
16
17        return ans;
18    }
19};