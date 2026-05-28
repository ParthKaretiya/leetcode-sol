// Last updated: 28/05/2026, 10:09:58
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4
5        int elementSum = 0;
6        int digitSum = 0;
7
8        for(int x : nums) {
9
10            elementSum += x;
11
12            while(x > 0) {
13
14                digitSum += x % 10;
15
16                x = x / 10;
17            }
18        }
19
20        return abs(elementSum - digitSum);
21    }
22};