// Last updated: 24/04/2026, 09:56:25
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {  // ✅ FIXED
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};