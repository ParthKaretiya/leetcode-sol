// Last updated: 26/05/2026, 21:16:38
1class Solution {
2public:
3    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
4        
5        map<int, int> lossCount;
6
7        for(auto match : matches) {
8            int winner = match[0];
9            int loser = match[1];
10
11            // ensure winner exists in map
12            if(lossCount.find(winner) == lossCount.end()) {
13                lossCount[winner] = 0;
14            }
15
16            // increase loser count
17            lossCount[loser]++;
18        }
19
20        vector<int> zeroLoss;
21        vector<int> oneLoss;
22
23        for(auto player : lossCount) {
24            if(player.second == 0) {
25                zeroLoss.push_back(player.first);
26            }
27            else if(player.second == 1) {
28                oneLoss.push_back(player.first);
29            }
30        }
31
32        return {zeroLoss, oneLoss};
33    }
34};