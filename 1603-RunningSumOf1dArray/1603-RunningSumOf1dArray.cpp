// Last updated: 21/05/2026, 11:09:03
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};