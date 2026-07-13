// Last updated: 7/13/2026, 1:15:16 PM
class Solution {
public:
    string triangleType(vector<int>& nums) {

        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        // not a triangle
        if (a + b <= c || b + c <= a || a + c <= b) {
            return "none";
        }

        // all equal
        if (a == b && b == c) {
            return "equilateral";
        }

        // any two equal
        if (a == b || b == c || a == c) {
            return "isosceles";
        }

        // all different
        return "scalene";
    }
};