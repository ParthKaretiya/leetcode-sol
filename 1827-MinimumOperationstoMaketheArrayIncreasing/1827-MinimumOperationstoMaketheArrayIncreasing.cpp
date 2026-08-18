// Last updated: 18/08/2026, 13:25:22
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int c = 0;
5      
6        for(int i=1 ; i<nums.size() ;i++){
7            if(nums[i] <= nums[i-1]){
8               int n= nums[i-1] + 1;
9               c =  c + n-nums[i] ;
10               nums[i] = n;
11               
12            }
13        }
14        return c;
15    }
16};