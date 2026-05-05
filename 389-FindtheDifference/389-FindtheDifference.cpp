// Last updated: 05/05/2026, 11:43:57
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        sort(s.begin(), s.end());
5        sort(t.begin(), t.end());
6
7        for (int i = 0; i < s.size(); i++) {
8            if (s[i] != t[i]) return t[i];
9        }
10
11        return t.back(); // extra char at end
12    }
13};