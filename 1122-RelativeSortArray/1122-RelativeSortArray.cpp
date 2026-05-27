// Last updated: 27/05/2026, 16:11:27
1class Solution {
2public:
3    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
4
5        unordered_map<int, int> mp;
6
7        // count frequency
8        for(int x : arr1) {
9            mp[x]++;
10        }
11
12        vector<int> ans;
13
14        // place elements according to arr2
15        for(int x : arr2) {
16
17            while(mp[x] > 0) {
18                ans.push_back(x);
19                mp[x]--;
20            }
21        }
22
23        // remaining elements
24        vector<int> rem;
25
26        for(auto it : mp) {
27
28            while(it.second > 0) {
29                rem.push_back(it.first);
30                it.second--;
31            }
32        }
33
34        sort(rem.begin(), rem.end());
35
36        // add remaining elements
37        for(int x : rem) {
38            ans.push_back(x);
39        }
40
41        return ans;
42    }
43};