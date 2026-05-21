// Last updated: 21/05/2026, 11:09:26
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int index = -1;

        // Find maximum element and its index
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] > maxi) {
                maxi = nums[i];
                index = i;
            }
        }

        // Check dominant condition
        for(int i = 0; i < nums.size(); i++) {

            if(i != index && maxi < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};