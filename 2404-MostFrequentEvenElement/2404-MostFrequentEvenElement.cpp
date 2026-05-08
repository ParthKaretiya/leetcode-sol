// Last updated: 08/05/2026, 12:13:24
1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4
5        map<int,int> mp;
6
7        for (int x : nums) {
8            if (x % 2 == 0) {
9                mp[x]++;
10            }
11        }
12
13        int ans = -1;
14        int maxi = 0;
15
16        for (auto it : mp) {
17
18            if (it.second > maxi) {
19                maxi = it.second;
20                ans = it.first;
21            }
22        }
23
24        return ans;
25    }
26};