// Last updated: 24/04/2026, 10:21:56
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string ans = "";
5        int i = 0, j = 0;
6
7        // alternate merge
8        while (i < word1.length() && j < word2.length()) {
9            ans += word1[i];
10            ans += word2[j];
11            i++;
12            j++;
13        }
14
15        // remaining characters
16        while (i < word1.length()) {
17            ans += word1[i];
18            i++;
19        }
20
21        while (j < word2.length()) {
22            ans += word2[j];
23            j++;
24        }
25
26        return ans;
27    }
28};