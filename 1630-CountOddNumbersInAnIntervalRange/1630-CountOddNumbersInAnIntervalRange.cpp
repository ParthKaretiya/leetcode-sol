// Last updated: 21/05/2026, 11:08:59
class Solution {
public:
    int countOdds(int low, int high) {

        int count = 0;

        for(int i = low; i <= high; i++){

            if(i % 2 == 1){
                count++;
            }
        }

        return count;
    }
};