// Last updated: 07/05/2026, 17:00:00
1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int, int> mp1, mp2;
6
7        // store nums1
8        for (int x : nums1) {
9            mp1[x]++;
10        }
11
12        // store nums2
13        for (int x : nums2) {
14            mp2[x]++;
15        }
16
17        vector<int> v1, v2;
18
19        // elements only in nums1
20        for (auto it : mp1) {
21
22            int num = it.first;
23
24            if (!mp2[num]) {
25                v1.push_back(num);
26            }
27        }
28
29        // elements only in nums2
30        for (auto it : mp2) {
31
32            int num = it.first;
33
34            if (!mp1[num]) {
35                v2.push_back(num);
36            }
37        }
38
39        return {v1, v2};
40    }
41};