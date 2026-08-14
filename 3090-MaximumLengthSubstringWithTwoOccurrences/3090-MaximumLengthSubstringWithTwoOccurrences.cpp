// Last updated: 8/14/2026, 11:31:42 AM
1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        int freq[26] = {0};
5
6        int left = 0;
7        int ans = 0;
8
9        for (int right = 0; right < s.length(); right++) {
10
11            freq[s[right] - 'a']++;
12
13            while (freq[s[right] - 'a'] > 2) {
14                freq[s[left] - 'a']--;
15                left++;
16            }
17
18            ans = max(ans, right - left + 1);
19        }
20
21        return ans;
22    }
23};