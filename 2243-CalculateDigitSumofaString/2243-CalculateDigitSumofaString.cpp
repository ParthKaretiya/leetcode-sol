// Last updated: 21/05/2026, 11:39:34
1class Solution {
2public:
3    string digitSum(string s, int k) {
4
5        // repeat until size becomes <= k
6        while(s.size() > k) {
7
8            string temp = "";
9
10            int i = 0;
11
12            // process in groups of k
13            while(i < s.size()) {
14
15                int sum = 0;
16                int count = 0;
17
18                // take k characters
19                while(i < s.size() && count < k) {
20
21                    sum += s[i] - '0';
22
23                    i++;
24                    count++;
25                }
26
27                // add sum into new string
28                temp += to_string(sum);
29            }
30
31            s = temp;
32        }
33
34        return s;
35    }
36};