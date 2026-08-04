// Last updated: 8/4/2026, 1:51:10 PM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        unordered_set<int> st(nums.begin(), nums.end());
5
6        int mn = *min_element(nums.begin(), nums.end());
7        int mx = *max_element(nums.begin(), nums.end());
8
9        vector<int> ans;
10
11        for (int i = mn + 1; i < mx; i++) {
12            if (!st.count(i))
13                ans.push_back(i);
14        }
15
16        return ans;
17    }
18};