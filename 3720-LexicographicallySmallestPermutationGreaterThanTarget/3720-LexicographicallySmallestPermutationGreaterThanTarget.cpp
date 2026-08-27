// Last updated: 27/08/2026, 11:45:01
1class Solution {
2public:
3    string lexGreaterPermutation(string s, string target) {
4        int cnt[26] = {};
5
6        for (char c : s)
7            cnt[c - 'a']++;
8
9        int temp[26];
10        for (int i = 0; i < 26; i++)
11            temp[i] = cnt[i];
12
13        int pos = -1;
14
15        for (int i = 0; i < target.size(); i++) {
16            int x = target[i] - 'a';
17
18            for (int j = x + 1; j < 26; j++) {
19                if (temp[j] > 0) {
20                    pos = i;
21                    break;
22                }
23            }
24
25            if (temp[x] == 0)
26                break;
27
28            temp[x]--;
29        }
30
31        if (pos == -1)
32            return "";
33
34        string ans;
35
36        for (int i = 0; i < pos; i++) {
37            ans += target[i];
38            cnt[target[i] - 'a']--;
39        }
40
41        int x = target[pos] - 'a';
42
43        for (int j = x + 1; j < 26; j++) {
44            if (cnt[j] > 0) {
45                ans += char('a' + j);
46                cnt[j]--;
47                break;
48            }
49        }
50
51        for (int i = 0; i < 26; i++) {
52            while (cnt[i] > 0) {
53                ans += char('a' + i);
54                cnt[i]--;
55            }
56        }
57
58        return ans;
59    }
60};