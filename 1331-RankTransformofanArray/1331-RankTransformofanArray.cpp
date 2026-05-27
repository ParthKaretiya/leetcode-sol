// Last updated: 27/05/2026, 16:16:34
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4
5        vector<int> temp = arr;
6
7        sort(temp.begin(), temp.end());
8
9        unordered_map<int, int> mp;
10
11        int rank = 1;
12
13        // assign ranks
14        for(int x : temp) {
15
16            if(mp.find(x) == mp.end()) {
17                mp[x] = rank;
18                rank++;
19            }
20        }
21
22        // replace with rank
23        for(int i = 0; i < arr.size(); i++) {
24            arr[i] = mp[arr[i]];
25        }
26
27        return arr;
28    }
29};