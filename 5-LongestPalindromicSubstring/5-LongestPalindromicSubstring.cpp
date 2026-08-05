// Last updated: 8/5/2026, 10:38:50 AM
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int start = 0, maxLen = 1;
5
6        for (int i = 0; i < s.size(); i++) {
7            int l = i, r = i;
8            while (l >= 0 && r < s.size() && s[l] == s[r]) {
9                if (r - l + 1 > maxLen) {
10                    start = l;
11                    maxLen = r - l + 1;
12                }
13                l--;
14                r++;
15            }
16
17            l = i;
18            r = i + 1;
19            while (l >= 0 && r < s.size() && s[l] == s[r]) {
20                if (r - l + 1 > maxLen) {
21                    start = l;
22                    maxLen = r - l + 1;
23                }
24                l--;
25                r++;
26            }
27        }
28
29        return s.substr(start, maxLen);
30    }
31};