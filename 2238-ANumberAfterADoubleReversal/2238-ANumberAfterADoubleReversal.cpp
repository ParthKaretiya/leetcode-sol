// Last updated: 7/13/2026, 1:17:11 PM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;
    }
};