// Last updated: 20/05/2026, 17:03:54
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        
5        vector<int>v1;
6
7        for(int x : nums){
8            v1.push_back(x*x);
9        }
10
11        sort(v1.begin() , v1.end());
12
13        return v1;
14    }
15};