// Last updated: 05/05/2026, 15:38:42
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        sort(ransomNote.begin(), ransomNote.end());
5        sort(magazine.begin(), magazine.end());
6
7        int i = 0, j = 0;
8
9        while (i < ransomNote.size() && j < magazine.size()) {
10            if (ransomNote[i] == magazine[j]) {
11                i++;   // move only when match
12            }
13            j++;       // always move
14        }
15
16        return i == ransomNote.size();
17    }
18};