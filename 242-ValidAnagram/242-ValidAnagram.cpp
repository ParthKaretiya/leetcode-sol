// Last updated: 01/10/2026, 17:13:13
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.size() != t.size()) {
5            return false;
6        }
7
8        unordered_map<char, int> m;
9
10        for (char x : s) {
11            m[x]++;
12        }
13
14        for (char x : t) {
15            m[x]--;
16        }
17
18        for (auto x : m) {
19            if (x.second != 0) {
20                return false;
21            }
22        }
23
24        return true;
25    }
26};