// Last updated: 06/06/2026, 13:32:50
1class Solution {
2public:
3    int countKeyChanges(string s) {
4
5        int count = 0;
6
7        for (int i = 1; i < s.size(); i++) {
8
9            // convert both to lowercase
10            if (tolower(s[i]) != tolower(s[i - 1])) {
11                count++;
12            }
13        }
14
15        return count;
16    }
17};