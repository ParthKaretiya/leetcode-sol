// Last updated: 11/06/2026, 15:44:46
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        return num == 0 || num % 10 != 0;
5    }
6};