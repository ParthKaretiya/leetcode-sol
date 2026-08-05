// Last updated: 8/5/2026, 10:20:09 AM
1class Solution {
2public:
3    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
4        vector<vector<int>> adj(n);
5        
6        for (auto &e : invocations)
7            adj[e[0]].push_back(e[1]);
8
9        vector<int> suspicious(n, 0);
10
11        function<void(int)> dfs = [&](int u) {
12            suspicious[u] = 1;
13            for (int v : adj[u]) {
14                if (!suspicious[v])
15                    dfs(v);
16            }
17        };
18
19        dfs(k);
20
21        // If a non-suspicious method calls a suspicious method,
22        // then we cannot remove the suspicious methods.
23        for (auto &e : invocations) {
24            if (!suspicious[e[0]] && suspicious[e[1]]) {
25                vector<int> ans;
26                for (int i = 0; i < n; i++)
27                    ans.push_back(i);
28                return ans;
29            }
30        }
31
32        // Return all remaining (non-suspicious) methods.
33        vector<int> ans;
34        for (int i = 0; i < n; i++) {
35            if (!suspicious[i])
36                ans.push_back(i);
37        }
38
39        return ans;
40    }
41};