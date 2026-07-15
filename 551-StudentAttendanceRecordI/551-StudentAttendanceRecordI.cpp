// Last updated: 7/15/2026, 5:25:42 PM
1class Solution {
2public:
3    bool checkRecord(string s) {
4        int absent = 0;
5        int late = 0;
6
7        for (char c : s) {
8            if (c == 'A') {
9                absent++;
10                late = 0;
11            } 
12            else if (c == 'L') {
13                late++;
14            } 
15            else {
16                late = 0;
17            }
18
19            if (absent >= 2 || late >= 3)
20                return false;
21        }
22
23        return true;
24    }
25};