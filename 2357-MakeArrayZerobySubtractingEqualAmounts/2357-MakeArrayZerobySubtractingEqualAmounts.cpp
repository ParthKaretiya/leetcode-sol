// Last updated: 15/06/2026, 13:51:30
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4        unordered_set<int> st;
5
6        for (int num : nums) {
7            if (num > 0) {
8                st.insert(num);
9            }
10        }
11
12        return st.size();
13    }
14};