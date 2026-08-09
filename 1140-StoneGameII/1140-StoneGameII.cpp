// Last updated: 8/9/2026, 3:36:02 PM
1class Solution {
2public:
3    int n;
4    vector<int> suffix;
5    vector<vector<int>> dp;
6
7    int solve(int i, int M) {
8        if (i >= n)
9            return 0;
10
11        if (dp[i][M] != -1)
12            return dp[i][M];
13
14        int ans = 0;
15
16        for (int X = 1; X <= 2 * M && i + X <= n; X++) {
17
18            int current = suffix[i] -
19                          solve(i + X, max(M, X));
20
21            ans = max(ans, current);
22        }
23
24        return dp[i][M] = ans;
25    }
26
27    int stoneGameII(vector<int>& piles) {
28        n = piles.size();
29
30        suffix.resize(n + 1, 0);
31
32        for (int i = n - 1; i >= 0; i--) {
33            suffix[i] = piles[i] + suffix[i + 1];
34        }
35
36        dp.assign(n, vector<int>(n + 1, -1));
37
38        return solve(0, 1);
39    }
40};