// Last updated: 09/05/2026, 10:53:25
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6
7        // count frequency
8        for(int x : nums) {
9            mp[x]++;
10        }
11
12        vector<int> ans;
13
14        // find duplicates
15        for(auto x : mp) {
16
17            if(x.second > 1) {
18                ans.push_back(x.first);
19            }
20        }
21
22        return ans;
23    }
24};