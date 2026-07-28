// Last updated: 28/07/2026, 13:27:10
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        int row = coordinates[0]-'a'+ 1;
5        int col = coordinates[1] + '0';
6
7        return ((row+col) %2 != 0);
8    }
9};