// Last updated: 22/05/2026, 20:41:53
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {

        for(int i = 0; i <= num; i++) {

            int sum = 0;
            int x = i;

            // reverse x
            while(x > 0) {

                int rem = x % 10;

                sum = sum * 10 + rem;

                x = x / 10;
            }

            // check condition
            if(i + sum == num) {
                return true;
            }
        }

        return false;
    }
};