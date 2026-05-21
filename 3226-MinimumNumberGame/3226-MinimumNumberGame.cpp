// Last updated: 21/05/2026, 11:07:33
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2) {
            swap(nums[i], nums[i + 1]);
        }

        return nums;
    }
};