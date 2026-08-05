// Last updated: 8/5/2026, 10:39:57 AM
1class Solution {
2public:
3    bool isNumber(string s) {
4        int i = 0, n = s.size();
5
6        while (i < n && s[i] == ' ')
7            i++;
8
9        if (i < n && (s[i] == '+' || s[i] == '-'))
10            i++;
11
12        bool num = false, dot = false, exp = false;
13
14        while (i < n) {
15            if (isdigit(s[i])) {
16                num = true;
17            } else if (s[i] == '.') {
18                if (dot || exp)
19                    return false;
20                dot = true;
21            } else if (s[i] == 'e' || s[i] == 'E') {
22                if (exp || !num)
23                    return false;
24                exp = true;
25                num = false;
26                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-'))
27                    i++;
28            } else if (s[i] == ' ') {
29                while (i < n && s[i] == ' ')
30                    i++;
31                return i == n && num;
32            } else {
33                return false;
34            }
35            i++;
36        }
37
38        return num;
39    }
40};