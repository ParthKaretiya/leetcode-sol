// Last updated: 15/05/2026, 11:56:31
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int>v1;
5        for(int x : nums){
6            v1.push_back(x);
7        }
8        for(int x : nums){
9            v1.push_back(x);
10        }
11        return v1;
12    }
13};