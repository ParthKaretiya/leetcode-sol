// Last updated: 21/05/2026, 11:09:14
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while(n>0){
            int rem = n%10;
            sum = rem + sum ;
            product = product * rem ;
            n = n/10;
        }

        int ans = product - sum;

        return ans ;
    }
};