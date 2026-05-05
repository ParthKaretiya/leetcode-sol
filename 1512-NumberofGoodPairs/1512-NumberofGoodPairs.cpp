// Last updated: 05/05/2026, 19:40:07
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int count = 0;
6
7        for (int x : nums) {
8            count += mp[x];  // add how many times seen before
9            mp[x]++;         // store current
10        }
11
12        return count;
13    }
14};