// Last updated: 07/05/2026, 09:03:09
1class Solution {
2public:
3    int countWords(vector<string>& words1, vector<string>& words2) {
4        unordered_map<string, int> mp1, mp2;
5
6        // count frequency in words1
7        for (string w : words1) {
8            mp1[w]++;
9        }
10
11        // count frequency in words2
12        for (string w : words2) {
13            mp2[w]++;
14        }
15
16        int count = 0;
17
18        // check words appearing exactly once in both
19        for (auto it : mp1) {
20            if (it.second == 1 && mp2[it.first] == 1) {
21                count++;
22            }
23        }
24
25        return count;
26    }
27};