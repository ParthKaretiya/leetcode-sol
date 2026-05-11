// Last updated: 11/05/2026, 11:15:14
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int k = 0; // position for next valid element
5        
6        for(int i = 0; i < nums.size(); i++) {
7            if(nums[i] != val) {
8                nums[k] = nums[i];
9                k++;
10            }
11        }
12        
13        return k;
14    }
15};