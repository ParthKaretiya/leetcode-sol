// Last updated: 7/16/2026, 11:40:32 AM
1class Solution {
2public:
3    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6
7        vector<vector<int>> ans(n, vector<int>(m));
8
9        for (int i = 0; i < m; i++) {
10            for (int j = 0; j < n; j++) {
11                ans[j][i] = matrix[i][j];
12            }
13        }
14
15        return ans;
16    }
17};