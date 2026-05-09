// Last updated: 09/05/2026, 10:51:55
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6
7        // count frequency
8        for(int x : nums) {
9            mp[x]++;
10        }
11
12        // find duplicate
13        for(auto x : mp) {
14
15            if(x.second > 1) {
16                return x.first;
17            }
18        }
19
20        return -1;
21    }
22};