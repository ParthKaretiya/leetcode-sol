// Last updated: 07/05/2026, 10:05:29
1class Solution {
2public:
3    int longestPalindrome(string s) {
4
5        unordered_map<char, int> mp;
6
7        // count frequency
8        for (char c : s) {
9            mp[c]++;
10        }
11
12        int ans = 0;
13        bool odd = false;
14
15        for (auto it : mp) {
16
17            // even frequency
18            if (it.second % 2 == 0) {
19                ans += it.second;
20            }
21
22            // odd frequency
23            else {
24                ans += it.second - 1;
25                odd = true;
26            }
27        }
28
29        // one odd character can stay in center
30        if (odd) ans++;
31
32        return ans;
33    }
34};