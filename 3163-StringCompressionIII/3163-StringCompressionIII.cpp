// Last updated: 30/07/2026, 14:00:57
1class Solution {
2public:
3    string compressedString(string word) {
4        string ans = "";
5        int count = 1;
6
7        for (int i = 0; i < word.size(); i++) {
8
9            if (i + 1 < word.size() && word[i] == word[i + 1] && count < 9) {
10                count++;
11            }
12            else {
13                ans += to_string(count);
14                ans += word[i];
15                count = 1;
16            }
17        }
18
19        return ans;
20    }
21};