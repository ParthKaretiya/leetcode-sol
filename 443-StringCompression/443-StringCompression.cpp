// Last updated: 8/2/2026, 11:35:11 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4
5        vector<char> ans;
6
7        int count = 1;
8
9        for (int i = 0; i < chars.size(); i++) {
10            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
11                count++;
12            } else {
13                ans.push_back(chars[i]);
14
15                if (count > 1) {
16                    string s = to_string(count);
17
18                    for (char c : s) {
19                        ans.push_back(c);
20                    }
21                }
22                count  = 1;
23            }
24        }
25
26        chars = ans;
27
28        return chars.size();
29    }
30};