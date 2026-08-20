// Last updated: 8/20/2026, 5:00:34 PM
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
5
6        for (int i = 0; i < 9; i++) {
7            for (int j = 0; j < 9; j++) {
8                char x = board[i][j];
9
10                if (x == '.') continue;
11
12                int box = (i / 3) * 3 + (j / 3);
13
14                if (rows[i].count(x) ||
15                    cols[j].count(x) ||
16                    boxes[box].count(x))
17                    return false;
18
19                rows[i].insert(x);
20                cols[j].insert(x);
21                boxes[box].insert(x);
22            }
23        }
24
25        return true;
26    }
27};