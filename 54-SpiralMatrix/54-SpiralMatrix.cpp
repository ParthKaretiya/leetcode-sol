// Last updated: 8/21/2026, 1:18:59 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> ans;
5
6        int top = 0;
7        int bottom = matrix.size() - 1;
8        int left = 0;
9        int right = matrix[0].size() - 1;
10
11        while (top <= bottom && left <= right) {
12
13            // Left -> Right
14            for (int j = left; j <= right; j++)
15                ans.push_back(matrix[top][j]);
16
17            top++;
18
19            // Top -> Bottom
20            for (int i = top; i <= bottom; i++)
21                ans.push_back(matrix[i][right]);
22
23            right--;
24
25            // Right -> Left
26            if (top <= bottom) {
27                for (int j = right; j >= left; j--)
28                    ans.push_back(matrix[bottom][j]);
29
30                bottom--;
31            }
32
33            // Bottom -> Top
34            if (left <= right) {
35                for (int i = bottom; i >= top; i--)
36                    ans.push_back(matrix[i][left]);
37
38                left++;
39            }
40        }
41
42        return ans;
43    }
44};