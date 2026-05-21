// Last updated: 21/05/2026, 11:08:47
class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int negativeCount = 0;

        for(int x : nums){

            if(x == 0){
                return 0;
            }

            if(x < 0){
                negativeCount++;
            }
        }

        if(negativeCount % 2 == 0){
            return 1;
        }

        return -1;
    }
};