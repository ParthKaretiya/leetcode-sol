// Last updated: 27/05/2026, 16:06:53
1class Solution {
2public:
3    vector<int> frequencySort(vector<int>& nums) {
4
5        unordered_map<int,int> mp;
6
7        // count frequency
8        for(int x : nums) {
9            mp[x]++;
10        }
11
12        sort(nums.begin(), nums.end(), [&](int a, int b) {
13
14            if(mp[a] == mp[b]) {
15                return a > b;
16            }
17
18            return mp[a] < mp[b];
19        });
20
21        return nums;
22    }
23};