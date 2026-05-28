// Last updated: 28/05/2026, 10:03:49
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4
5        string ans = "";
6
7        while(columnNumber > 0) {
8
9            columnNumber--;
10
11            char ch = 'A' + (columnNumber % 26);
12
13            ans = ch + ans;
14
15            columnNumber = columnNumber / 26;
16        }
17
18        return ans;
19    }
20};