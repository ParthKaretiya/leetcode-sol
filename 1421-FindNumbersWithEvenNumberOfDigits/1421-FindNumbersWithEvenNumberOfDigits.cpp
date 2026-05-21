// Last updated: 21/05/2026, 11:09:12
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;

        for (int num : nums) {

            int digits = 0;

            while (num > 0) {
                digits++;
                num /= 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};