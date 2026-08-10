// Last updated: 8/10/2026, 9:24:01 AM
1class Solution {
2public:
3    bool winnerSquareGame(int n) {
4
5        vector<bool> dp(n + 1, false);
6
7        for (int i = 1; i <= n; i++) {
8
9            for (int j = 1; j * j <= i; j++) {
10
11                if (dp[i - j * j] == false) {
12                    dp[i] = true;
13                    break;
14                }
15            }
16        }
17
18        return dp[n];
19    }
20};