// Last updated: 7/16/2026, 11:43:08 AM
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int i = 0, j = s.size() - 1;
5
6        while (i < j) {
7            while (i < j && !isalpha(s[i]))
8                i++;
9
10            while (i < j && !isalpha(s[j]))
11                j--;
12
13            swap(s[i], s[j]);
14            i++;
15            j--;
16        }
17
18        return s;
19    }
20};