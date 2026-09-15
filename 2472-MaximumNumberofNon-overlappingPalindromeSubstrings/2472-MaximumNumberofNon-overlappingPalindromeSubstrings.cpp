// Last updated: 15/09/2026, 09:52:17
1class Solution {
2public:
3    int maxPalindromes(string s, int k) {
4        int n = s.size();
5
6        vector<vector<bool>> pal(n, vector<bool>(n, false));
7
8        for (int i = n - 1; i >= 0; i--) {
9            for (int j = i; j < n; j++) {
10                if (s[i] == s[j] && (j - i <= 2 || pal[i + 1][j - 1])) {
11                    pal[i][j] = true;
12                }
13            }
14        }
15
16        vector<int> dp(n + 1, 0);
17
18        for (int i = 1; i <= n; i++) {
19            dp[i] = dp[i - 1];
20
21            for (int j = 0; j <= i - k; j++) {
22                if (pal[j][i - 1]) {
23                    dp[i] = max(dp[i], dp[j] + 1);
24                }
25            }
26        }
27
28        return dp[n];
29    }
30};