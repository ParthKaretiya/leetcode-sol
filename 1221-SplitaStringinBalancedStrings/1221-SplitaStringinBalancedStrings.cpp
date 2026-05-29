// Last updated: 29/05/2026, 16:20:38
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int balance = 0;
5        int count = 0;
6
7        for(char ch : s) {
8            if(ch == 'L') {
9                balance++;
10            } else {
11                balance--;
12            }
13
14            if(balance == 0) {
15                count++;
16            }
17        }
18
19        return count;
20    }
21};