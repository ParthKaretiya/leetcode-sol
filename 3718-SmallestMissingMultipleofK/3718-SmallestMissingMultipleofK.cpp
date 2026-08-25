// Last updated: 8/25/2026, 9:59:59 AM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        unordered_set<int> st(nums.begin(), nums.end());
5
6        for (int i = 1; ; i++) {
7            int x = k * i;
8
9            if (!st.count(x))
10                return x;
11        }
12    }
13};