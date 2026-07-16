// Last updated: 16/07/2026, 13:25:31
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4
5        unordered_map<char, int> m;
6
7        int left = 0;
8        int ans = 0;
9
10        for (int right = 0; right < s.size(); right++) {
11
12            m[s[right]]++;
13
14            while (m[s[right]] > 1) {
15                m[s[left]]--;
16                left++;
17            }
18
19            int currentLength = right - left + 1;
20
21            if (currentLength > ans) {
22                ans = currentLength;
23            }
24        }
25
26        return ans;
27    }
28};