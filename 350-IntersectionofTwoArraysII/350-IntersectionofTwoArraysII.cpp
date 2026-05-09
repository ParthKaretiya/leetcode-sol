// Last updated: 09/05/2026, 10:59:39
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int,int> mp;
6
7        // count nums1 frequency
8        for(int x : nums1) {
9            mp[x]++;
10        }
11
12        vector<int> ans;
13
14        // check nums2
15        for(int x : nums2) {
16
17            // common element exists
18            if(mp[x] > 0) {
19
20                ans.push_back(x);
21
22                // decrease frequency
23                mp[x]--;
24            }
25        }
26
27        return ans;
28    }
29};