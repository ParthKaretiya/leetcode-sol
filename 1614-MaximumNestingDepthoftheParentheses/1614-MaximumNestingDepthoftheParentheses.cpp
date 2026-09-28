// Last updated: 9/28/2026, 11:54:34 AM
1class Solution {
2public:
3    int maxDepth(std::string s) {
4        int depth = 0;
5        int r = 0;
6        for (char c : s) {
7            if (c == ')') {
8                depth--;
9                continue;
10            }
11            // Digits and operators
12            if (c != '(') continue;
13            depth++;
14            // New max only possible after '('
15            if (depth > r) r = depth;
16        }
17        return r;
18    }
19};