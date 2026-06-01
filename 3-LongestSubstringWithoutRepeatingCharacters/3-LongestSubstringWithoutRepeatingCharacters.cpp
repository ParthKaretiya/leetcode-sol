// Last updated: 01/06/2026, 11:54:10
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4
5        unordered_map<char, int> m1;
6
7        int left = 0;
8        int ans = 0;
9
10        for (int right = 0; right < s.size(); right++) {
11
12            m1[s[right]]++;
13
14            while (m1[s[right]] > 1) {
15                m1[s[left]]--;
16                left++;
17            }
18
19            ans = max(ans, right - left + 1);
20        }
21
22        return ans;
23    }
24};