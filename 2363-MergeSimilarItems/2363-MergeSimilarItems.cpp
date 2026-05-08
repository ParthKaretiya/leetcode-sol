// Last updated: 08/05/2026, 11:49:34
1class Solution {
2public:
3    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
4                                          vector<vector<int>>& items2) {
5
6        map<int, int> mp;
7
8        // items1
9        for (auto it : items1) {
10
11            int value = it[0];
12            int weight = it[1];
13
14            mp[value] += weight;
15        }
16
17        // items2
18        for (auto it : items2) {
19
20            int value = it[0];
21            int weight = it[1];
22
23            mp[value] += weight;
24        }
25
26        vector<vector<int>> ans;
27
28        // make final answer
29        for (auto it : mp) {
30
31            ans.push_back({it.first, it.second});
32        }
33
34        return ans;
35    }
36};