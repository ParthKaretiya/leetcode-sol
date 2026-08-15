// Last updated: 8/15/2026, 8:15:18 PM
1class Solution {
2public:
3    long long elevatorRequests(int n, int start, vector<int>& requests) {
4        vector<int> noravexuli = requests;
5        noravexuli.push_back(start);
6
7        sort(noravexuli.begin(), noravexuli.end());
8        noravexuli.erase(
9            unique(noravexuli.begin(), noravexuli.end()),
10            noravexuli.end()
11        );
12
13        int m = noravexuli.size();
14        int s = lower_bound(
15            noravexuli.begin(),
16            noravexuli.end(),
17            start
18        ) - noravexuli.begin();
19
20        int k = requests.size();
21
22        vector<int> isRequest(m, 0);
23
24        for (int x : requests) {
25            int idx = lower_bound(
26                noravexuli.begin(),
27                noravexuli.end(),
28                x
29            ) - noravexuli.begin();
30
31            isRequest[idx] = 1;
32        }
33
34        // Prefix count of requests
35        vector<int> pref(m + 1, 0);
36
37        for (int i = 0; i < m; i++) {
38            pref[i + 1] = pref[i] + isRequest[i];
39        }
40
41        const long long INF = 4e18;
42
43        vector<vector<long long>> dpL(
44            m, vector<long long>(m, INF)
45        );
46
47        vector<vector<long long>> dpR(
48            m, vector<long long>(m, INF)
49        );
50
51        // Elevator starts at start.
52        dpL[s][s] = 0;
53        dpR[s][s] = 0;
54
55        for (int len = 1; len <= m; len++) {
56            for (int l = 0; l + len - 1 < m; l++) {
57
58                int r = l + len - 1;
59
60                if (s < l || s > r)
61                    continue;
62
63                // Requests already fulfilled.
64                int fulfilled = pref[r + 1] - pref[l];
65
66                // Requests still waiting.
67                int pending = k - fulfilled;
68
69                // Go to l - 1
70                if (l > 0) {
71
72                    // From l to l-1
73                    long long dist =
74                        noravexuli[l] - noravexuli[l - 1];
75
76                    dpL[l - 1][r] = min(
77                        dpL[l - 1][r],
78                        dpL[l][r] + dist * pending
79                    );
80
81                    // From r to l-1
82                    dist =
83                        noravexuli[r] - noravexuli[l - 1];
84
85                    dpL[l - 1][r] = min(
86                        dpL[l - 1][r],
87                        dpR[l][r] + dist * pending
88                    );
89                }
90
91                // Go to r + 1
92                if (r + 1 < m) {
93
94                    // From r to r+1
95                    long long dist =
96                        noravexuli[r + 1] - noravexuli[r];
97
98                    dpR[l][r + 1] = min(
99                        dpR[l][r + 1],
100                        dpR[l][r] + dist * pending
101                    );
102
103                    // From l to r+1
104                    dist =
105                        noravexuli[r + 1] - noravexuli[l];
106
107                    dpR[l][r + 1] = min(
108                        dpR[l][r + 1],
109                        dpL[l][r] + dist * pending
110                    );
111                }
112            }
113        }
114
115        return min(dpL[0][m - 1], dpR[0][m - 1]);
116    }
117};