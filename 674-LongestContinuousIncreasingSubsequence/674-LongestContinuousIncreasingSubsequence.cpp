// Last updated: 7/13/2026, 1:20:56 PM
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1, count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1])
                count++;
            else
                count = 1;

            ans = max(ans, count);
        }

        return ans;
    }
};