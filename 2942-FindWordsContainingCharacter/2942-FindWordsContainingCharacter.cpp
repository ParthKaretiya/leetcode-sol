// Last updated: 17/05/2026, 19:16:50
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> ans;
5
6        for (int i = 0; i < words.size(); i++) {
7            for (char ch : words[i]) {
8                if (ch == x) {
9                    ans.push_back(i);
10                    break;
11                }
12            }
13        }
14
15        return ans;
16    }
17};