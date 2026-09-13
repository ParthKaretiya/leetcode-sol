// Last updated: 13/09/2026, 12:40:44
1class Solution {
2public:
3    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
4        vector<pair<int, int>> a, b;
5
6        int n = img1.size();
7
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < n; j++) {
10                if (img1[i][j] == 1)
11                    a.push_back({i, j});
12
13                if (img2[i][j] == 1)
14                    b.push_back({i, j});
15            }
16        }
17
18        map<pair<int, int>, int> mp;
19
20        int ans = 0;
21
22        for (auto p1 : a) {
23            for (auto p2 : b) {
24                int x = p1.first - p2.first;
25                int y = p1.second - p2.second;
26
27                mp[{x, y}]++;
28                ans = max(ans, mp[{x, y}]);
29            }
30        }
31
32        return ans;
33    }
34};