// Last updated: 07/05/2026, 12:26:20
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int, int> mp1, mp2;
6
7        // store freq of nums1
8        for (int x : nums1) {
9            mp1[x]++;
10        }
11
12        // store freq of nums2
13        for (int x : nums2) {
14            mp2[x]++;
15        }
16
17        vector<int> ans;
18
19        // check common numbers
20        for (auto it : mp1) {
21
22            int num = it.first;
23
24            if (mp2[num]) {
25                ans.push_back(num);
26            }
27        }
28
29        return ans;
30    }
31};