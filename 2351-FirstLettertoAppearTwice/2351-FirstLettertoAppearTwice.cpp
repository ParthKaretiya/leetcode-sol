// Last updated: 08/05/2026, 12:07:31
1class Solution {
2public:
3    char repeatedCharacter(string s) {
4
5        unordered_set<char> st;
6
7        for (char c : s) {
8
9            // already seen
10            if (st.count(c)) {
11                return c;
12            }
13
14            st.insert(c);
15        }
16
17        return ' ';
18    }
19};