// Last updated: 01/10/2026, 17:22:32
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] != nums[i - 1]) {
8                nums[k] = nums[i];
9                k++;
10            }
11        }
12
13        return k;
14    }
15};