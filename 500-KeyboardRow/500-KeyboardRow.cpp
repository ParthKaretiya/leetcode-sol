// Last updated: 07/05/2026, 09:07:49
1class Solution {
2public:
3    vector<string> findWords(vector<string>& words) {
4        string r1 = "qwertyuiop";
5        string r2 = "asdfghjkl";
6        string r3 = "zxcvbnm";
7
8        vector<string> ans;
9
10        for (string w : words) {
11
12            int row = 0;
13
14            char c = tolower(w[0]);
15
16            if (r1.find(c) != -1) row = 1;
17            else if (r2.find(c) != -1) row = 2;
18            else row = 3;
19
20            bool ok = true;
21
22            for (char ch : w) {
23                ch = tolower(ch);
24
25                if (row == 1 && r1.find(ch) == -1) ok = false;
26                if (row == 2 && r2.find(ch) == -1) ok = false;
27                if (row == 3 && r3.find(ch) == -1) ok = false;
28            }
29
30            if (ok) ans.push_back(w);
31        }
32
33        return ans;
34    }
35};