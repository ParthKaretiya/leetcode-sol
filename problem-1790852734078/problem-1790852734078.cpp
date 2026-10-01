// Last updated: 01/10/2026, 16:35:34
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        int col = coordinates[0] - 'a' + 1;
5        int row = coordinates[1] - '0';
6
7        return (col + row) % 2 == 1;
8    }
9};