// Last updated: 31/07/2026, 13:22:38
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        int n = code.size();
5        vector<int> ans(n, 0);
6
7        if (k == 0)
8            return ans;
9
10        for (int i = 0; i < n; i++) {
11            int sum = 0;
12
13            if (k > 0) {
14                for (int j = 1; j <= k; j++) {
15                    sum += code[(i + j) % n];
16                }
17            } else {
18                for (int j = 1; j <= -k; j++) {
19                    sum += code[(i - j + n) % n];
20                }
21            }
22
23            ans[i] = sum;
24        }
25
26        return ans;
27    }
28};