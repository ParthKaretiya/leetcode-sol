// Last updated: 22/05/2026, 20:41:42
class Solution {
public:
    int sumOfMultiples(int n) {
        
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }

        return sum;
    }
};