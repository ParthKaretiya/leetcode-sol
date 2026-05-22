// Last updated: 22/05/2026, 20:42:07
class Solution {
public:
    int sumBase(int n, int k) {

        int sum = 0;

        while(n > 0) {

            int rem = n % k;

            sum += rem;

            n = n / k;
        }

        return sum;
    }
};
