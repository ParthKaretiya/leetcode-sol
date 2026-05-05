// Last updated: 05/05/2026, 19:33:25
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<char> s(jewels.begin(), jewels.end());
5        
6        int count = 0;
7        for (char c : stones) {
8        if (s.count(c)) {
9            count++;
10            }
11
12        }
13        
14        return count;
15    }
16};