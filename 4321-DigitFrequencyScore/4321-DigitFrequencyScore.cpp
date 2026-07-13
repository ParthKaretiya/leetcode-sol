// Last updated: 7/13/2026, 1:15:21 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n>0){
            sum = sum + n%10;
            n =n/10;
        }
        return sum ;
    }
};