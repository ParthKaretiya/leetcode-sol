// Last updated: 7/13/2026, 1:17:48 PM
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxSide = 0;
        int count = 0;

        for (auto rect : rectangles) {
            int side = min(rect[0], rect[1]);

            if (side > maxSide) {
                maxSide = side;
                count = 1;
            }
            else if (side == maxSide) {
                count++;
            }
        }

        return count;
    }
};