// Last updated: 8/20/2026, 5:00:46 PM
1class Solution {
2public:
3    bool solve(vector<vector<char>>& board) {
4        for (int i = 0; i < 9; i++) {
5            for (int j = 0; j < 9; j++) {
6
7                if (board[i][j] != '.') continue;
8
9                for (char num = '1'; num <= '9'; num++) {
10
11                    if (isValid(board, i, j, num)) {
12                        board[i][j] = num;
13
14                        if (solve(board))
15                            return true;
16
17                        board[i][j] = '.';
18                    }
19                }
20
21                return false;
22            }
23        }
24
25        return true;
26    }
27
28    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
29
30        for (int i = 0; i < 9; i++) {
31            if (board[row][i] == num)
32                return false;
33
34            if (board[i][col] == num)
35                return false;
36
37            int r = (row / 3) * 3 + i / 3;
38            int c = (col / 3) * 3 + i % 3;
39
40            if (board[r][c] == num)
41                return false;
42        }
43
44        return true;
45    }
46
47    void solveSudoku(vector<vector<char>>& board) {
48        solve(board);
49    }
50};