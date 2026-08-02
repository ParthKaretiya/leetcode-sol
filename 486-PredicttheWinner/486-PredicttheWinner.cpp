// Last updated: 02/08/2026, 23:37:31
1class Solution {
2public:
3    bool predictTheWinner(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<vector<int>> dp(n, vector<int>(n, 0));
7
8        // Base case
9        for (int i = 0; i < n; i++) {
10            dp[i][i] = nums[i];
11        }
12
13        // Fill DP table
14        for (int len = 2; len <= n; len++) {
15            for (int i = 0; i + len - 1 < n; i++) {
16                int j = i + len - 1;
17
18                dp[i][j] = max(
19                    nums[i] - dp[i + 1][j],
20                    nums[j] - dp[i][j - 1]
21                );
22            }
23        }
24
25        return dp[0][n - 1] >= 0;
26    }
27};