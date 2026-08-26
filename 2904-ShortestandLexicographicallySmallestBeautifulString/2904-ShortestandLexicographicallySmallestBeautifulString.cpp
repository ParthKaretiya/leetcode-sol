// Last updated: 8/26/2026, 9:11:11 AM
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) {
4        int n = s.size();
5        int left = 0;
6        int ones = 0;
7
8        string ans = "";
9
10        for (int right = 0; right < n; right++) {
11
12            if (s[right] == '1')
13                ones++;
14
15            while (ones > k) {
16                if (s[left] == '1')
17                    ones--;
18                left++;
19            }
20
21            if (ones == k) {
22
23                while (s[left] == '0')
24                    left++;
25
26                string cur = s.substr(left, right - left + 1);
27
28                if (ans == "" ||
29                    cur.size() < ans.size() ||
30                    (cur.size() == ans.size() && cur < ans)) {
31                    ans = cur;
32                }
33            }
34        }
35
36        return ans;
37    }
38};