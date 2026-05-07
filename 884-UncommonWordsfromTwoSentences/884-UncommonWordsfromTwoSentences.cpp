// Last updated: 07/05/2026, 09:58:45
1class Solution {
2public:
3    vector<string> uncommonFromSentences(string s1, string s2) {
4
5        unordered_map<string, int> mp;
6
7        stringstream ss1(s1), ss2(s2);
8
9        string word;
10
11        // words from s1
12        while (ss1 >> word) {
13            mp[word]++;
14        }
15
16        // words from s2
17        while (ss2 >> word) {
18            mp[word]++;
19        }
20
21        vector<string> ans;
22
23        for (auto it : mp) {
24            if (it.second == 1) {
25                ans.push_back(it.first);
26            }
27        }
28
29        return ans;
30    }
31};
32