// Last updated: 7/13/2026, 1:15:46 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int elementSum = 0;
        int digitSum = 0;

        for(int x : nums) {

            elementSum += x;

            while(x > 0) {

                digitSum += x % 10;

                x = x / 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};