// Last updated: 21/05/2026, 11:09:09
class Solution {
public:
    int numberOfSteps(int num) {

        int steps = 0;

        while (num != 0) {

            if (num % 2 == 0) {
                num /= 2;
            }
            else {
                num -= 1;
            }

            steps++;
        }

        return steps;
    }
};