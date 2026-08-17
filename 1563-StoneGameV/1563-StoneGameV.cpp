// Last updated: 8/17/2026, 9:22:35 AM
1class Solution {
2public:
3    int stoneGameV(vector<int>& stoneValue) {
4        int n = stoneValue.size();
5
6        vector<int> prefix(n + 1, 0);
7        for (int i = 0; i < n; i++) {
8            prefix[i + 1] = prefix[i] + stoneValue[i];
9        }
10
11        vector<vector<int>> dp(n, vector<int>(n, 0));
12
13        for (int len = 2; len <= n; len++) {
14            for (int i = 0; i + len <= n; i++) {
15                int j = i + len - 1;
16
17                for (int k = i; k < j; k++) {
18                    int left = prefix[k + 1] - prefix[i];
19                    int right = prefix[j + 1] - prefix[k + 1];
20
21                    if (left < right) {
22                        dp[i][j] = max(
23                            dp[i][j],
24                            left + dp[i][k]
25                        );
26                    }
27                    else if (left > right) {
28                        dp[i][j] = max(
29                            dp[i][j],
30                            right + dp[k + 1][j]
31                        );
32                    }
33                    else {
34                        dp[i][j] = max({
35                            dp[i][j],
36                            left + dp[i][k],
37                            right + dp[k + 1][j]
38                        });
39                    }
40                }
41            }
42        }
43
44        return dp[0][n - 1];
45    }
46};