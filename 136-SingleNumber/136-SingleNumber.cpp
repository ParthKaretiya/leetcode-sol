// Last updated: 09/05/2026, 10:30:41
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6
7        for(int x : nums) {
8            mp[x]++;
9        }
10
11        for(auto x : mp) {
12
13            if(x.second == 1) {
14                return x.first;
15            }
16        }
17
18        return -1;
19    }
20};