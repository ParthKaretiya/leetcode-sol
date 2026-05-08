// Last updated: 08/05/2026, 17:54:23
1class Solution {
2public:
3    int similarPairs(vector<string>& words) {
4
5        int count = 0;
6
7        for (int i = 0; i < words.size(); i++) {
8
9            set<char> s1(words[i].begin(), words[i].end());
10
11            for (int j = i + 1; j < words.size(); j++) {
12
13                set<char> s2(words[j].begin(), words[j].end());
14
15                if (s1 == s2) {
16                    count++;
17                }
18            }
19        }
20
21        return count;
22    }
23};