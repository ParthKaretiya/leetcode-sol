// Last updated: 22/05/2026, 20:41:56
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0){
            return n;
        }
        
        return n * 2;
    }
};