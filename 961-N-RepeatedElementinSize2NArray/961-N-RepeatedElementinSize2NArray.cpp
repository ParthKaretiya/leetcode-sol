// Last updated: 27/05/2026, 16:24:39
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int n = nums.size()/2;
5        unordered_map<int , int>m;
6        for(int x : nums){
7            m[x]++;
8        }
9
10        for(auto it : m){
11            if(it.second == n){
12                return it.first;
13            }
14        }
15        return -1;
16    }
17};