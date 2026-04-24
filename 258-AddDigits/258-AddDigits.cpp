// Last updated: 24/04/2026, 09:56:31
class Solution {
public:
    int addDigits(int num) {
        if (num == 0){
            return 0;
        }
        if (num%9 == 0){
            return 9;
        }
        return num%9;

    }
};