// Last updated: 06/06/2026, 13:34:41
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4
5        int a = nums[0];
6        int b = nums[1];
7        int c = nums[2];
8
9        // not a triangle
10        if (a + b <= c || b + c <= a || a + c <= b) {
11            return "none";
12        }
13
14        // all equal
15        if (a == b && b == c) {
16            return "equilateral";
17        }
18
19        // any two equal
20        if (a == b || b == c || a == c) {
21            return "isosceles";
22        }
23
24        // all different
25        return "scalene";
26    }
27};