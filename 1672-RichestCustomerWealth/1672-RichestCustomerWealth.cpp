// Last updated: 14/05/2026, 11:14:19
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4
5        int maxi = 0;
6
7        for(int i = 0; i < accounts.size(); i++){
8
9            int sum = 0;
10
11            for(int j = 0; j < accounts[i].size(); j++){
12                sum += accounts[i][j];
13            }
14
15            maxi = max(maxi, sum);
16        }
17
18        return maxi;
19    }
20};