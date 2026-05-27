// Last updated: 27/05/2026, 15:33:34
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4
5        vector<int> temp = nums;
6
7        sort(temp.begin(), temp.end());
8
9        unordered_map<int, int> mp;
10
11        // store first position
12        for(int i = 0; i < temp.size(); i++) {
13
14            if(mp.find(temp[i]) == mp.end()) {
15                mp[temp[i]] = i;
16            }
17        }
18
19        vector<int> ans;
20
21        for(int x : nums) {
22            ans.push_back(mp[x]);
23        }
24
25        return ans;
26    }
27};