// Last updated: 31/05/2026, 09:01:46
1class Solution {
2public:
3    int countGoodRectangles(vector<vector<int>>& rectangles) {
4        int maxSide = 0;
5        int count = 0;
6
7        for (auto rect : rectangles) {
8            int side = min(rect[0], rect[1]);
9
10            if (side > maxSide) {
11                maxSide = side;
12                count = 1;
13            }
14            else if (side == maxSide) {
15                count++;
16            }
17        }
18
19        return count;
20    }
21};