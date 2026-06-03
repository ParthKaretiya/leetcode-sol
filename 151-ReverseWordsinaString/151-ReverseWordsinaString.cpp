// Last updated: 03/06/2026, 10:03:46
1class Solution {
2public:
3    string reverseWords(string s) {
4        
5        string ans = "";
6        int i = s.size() - 1;
7
8        while(i >= 0) {
9
10            // skip spaces
11            while(i >= 0 && s[i] == ' ') {
12                i--;
13            }
14
15            string word = "";
16
17            // make word
18            while(i >= 0 && s[i] != ' ') {
19                word = s[i] + word;
20                i--;
21            }
22
23            // add word
24            if(word.size() > 0) {
25                ans = ans + word + " ";
26            }
27        }
28
29        // remove last extra space
30        if(!ans.empty()) {
31            ans.pop_back();
32        }
33
34        return ans;
35    }
36};