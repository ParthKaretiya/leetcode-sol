// Last updated: 14/06/2026, 17:01:18
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int sum = 0;
5
6        for(int i = 1; i < s.size(); i++) {
7            if(tolower(s[i]) != tolower(s[i - 1]))
8                sum++;
9        }
10
11        return sum;
12    }
13};