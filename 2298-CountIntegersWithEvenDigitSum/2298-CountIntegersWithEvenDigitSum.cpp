// Last updated: 21/05/2026, 11:08:34
class Solution {
public:
    int countEven(int num) {

        int count = 0;

        for (int i = 1; i <= num; i++) {

            int n = i;
            int sum = 0;

            // Find digit sum
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            // Check even sum
            if (sum % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};