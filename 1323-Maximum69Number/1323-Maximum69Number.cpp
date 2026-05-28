// Last updated: 28/05/2026, 10:14:09
1class Solution {
2public:
3    int maximum69Number (int num) {
4
5        string s = to_string(num);
6
7        for(int i = 0; i < s.size(); i++) {
8
9            if(s[i] == '6') {
10                s[i] = '9';
11                break;
12            }
13        }
14
15        return stoi(s);
16    }
17};