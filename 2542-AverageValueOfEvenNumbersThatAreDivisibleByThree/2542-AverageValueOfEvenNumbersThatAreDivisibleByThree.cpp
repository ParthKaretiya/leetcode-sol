// Last updated: 22/05/2026, 20:41:51
class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            
            // divisible by both 2 and 3
            if(nums[i] % 6 == 0) {
                
                sum += nums[i];
                count++;
            }
        }

        if(count == 0) {
            return 0;
        }

        return sum / count;
    }
};