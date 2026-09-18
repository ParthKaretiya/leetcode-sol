// Last updated: 18/09/2026, 17:24:41
1class Solution {
2public:
3    vector<string> maxNumOfSubstrings(string s) {
4        vector<int> first(26, -1), last(26, -1);
5
6        for (int i = 0; i < s.size(); i++) {
7            int x = s[i] - 'a';
8
9            if (first[x] == -1)
10                first[x] = i;
11
12            last[x] = i;
13        }
14
15        vector<pair<int, int>> intervals;
16
17        for (int i = 0; i < s.size(); i++) {
18            int x = s[i] - 'a';
19
20            if (first[x] != i)
21                continue;
22
23            int l = i;
24            int r = last[x];
25            bool valid = true;
26
27            for (int j = l; j <= r; j++) {
28                int y = s[j] - 'a';
29
30                if (first[y] < l) {
31                    valid = false;
32                    break;
33                }
34
35                r = max(r, last[y]);
36            }
37
38            if (valid)
39                intervals.push_back({l, r});
40        }
41
42        sort(intervals.begin(), intervals.end(),
43             [](auto &a, auto &b) {
44                 return a.second < b.second;
45             });
46
47        vector<string> ans;
48        int prevEnd = -1;
49
50        for (auto &[l, r] : intervals) {
51            if (l > prevEnd) {
52                ans.push_back(s.substr(l, r - l + 1));
53                prevEnd = r;
54            }
55        }
56
57        return ans;
58    }
59};