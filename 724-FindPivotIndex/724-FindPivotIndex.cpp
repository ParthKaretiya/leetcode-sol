// Last updated: 19/05/2026, 17:24:50
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        
5        int totalSum = 0;
6
7        for(int num : nums) {
8            totalSum += num;
9        }
10
11        int leftSum = 0;
12
13        for(int i = 0; i < nums.size(); i++) {
14
15            int rightSum = totalSum - leftSum - nums[i];
16
17            if(leftSum == rightSum) {
18                return i;
19            }
20
21            leftSum += nums[i];
22        }
23
24        return -1;
25    }
26};