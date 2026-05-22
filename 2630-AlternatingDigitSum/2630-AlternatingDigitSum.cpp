// Last updated: 22/05/2026, 20:41:45
class Solution {
public:
    int alternateDigitSum(int n) {

        vector<int> v1;

        while(n > 0) {

            int rem = n % 10;

            v1.insert(v1.begin(), rem);

            n = n / 10;
        }

        int sum = 0;

        int x = v1.size();

        for(int i = 0; i < x; i++) {

            if(i % 2 == 0) {
                sum = sum + v1[i];
            }
            else {
                sum = sum - v1[i];
            }
        }

        return sum;
    }
};