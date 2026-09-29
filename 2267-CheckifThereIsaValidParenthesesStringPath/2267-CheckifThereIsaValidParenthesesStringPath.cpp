// Last updated: 29/09/2026, 10:46:34
1class Solution {
2public:
3    bool hasValidPath(vector<vector<char>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6
7        // Total number of cells in the path must be even
8        if ((m + n - 1) % 2 == 1)
9            return false;
10
11        // A valid parentheses string cannot start with ')'
12        // or end with '('
13        if (grid[0][0] == ')' || grid[m - 1][n - 1] == '(')
14            return false;
15
16        vector<vector<vector<bool>>> visited(
17            m,
18            vector<vector<bool>>(n, vector<bool>(m + n, false))
19        );
20
21        return dfs(grid, 0, 0, 0, visited);
22    }
23
24private:
25    bool dfs(vector<vector<char>>& grid,
26             int r,
27             int c,
28             int balance,
29             vector<vector<vector<bool>>>& visited) {
30
31        int m = grid.size();
32        int n = grid[0].size();
33
34        // Process current cell
35        if (grid[r][c] == '(')
36            balance++;
37        else
38            balance--;
39
40        // Invalid parentheses
41        if (balance < 0)
42            return false;
43
44        // Already visited with same balance
45        if (visited[r][c][balance])
46            return false;
47
48        visited[r][c][balance] = true;
49
50        // Reached destination
51        if (r == m - 1 && c == n - 1)
52            return balance == 0;
53
54        // Move down
55        if (r + 1 < m) {
56            if (dfs(grid, r + 1, c, balance, visited))
57                return true;
58        }
59
60        // Move right
61        if (c + 1 < n) {
62            if (dfs(grid, r, c + 1, balance, visited))
63                return true;
64        }
65
66        return false;
67    }
68};