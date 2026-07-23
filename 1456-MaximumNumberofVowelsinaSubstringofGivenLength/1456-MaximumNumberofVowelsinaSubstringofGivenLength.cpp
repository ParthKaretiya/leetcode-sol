// Last updated: 23/07/2026, 11:44:02
1class Solution {
2public:
3    bool isVowel(char ch) {
4        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
5    }
6
7    int maxVowels(string s, int k) {
8        int count = 0;
9        int ans = 0;
10
11        for (int i = 0; i < k; i++) {
12            if (isVowel(s[i]))
13                count++;
14        }
15
16        ans = count;
17
18        for (int i = k; i < s.size(); i++) {
19            if (isVowel(s[i]))
20                count++;
21
22            if (isVowel(s[i - k]))
23                count--;
24
25            ans = max(ans, count);
26        }
27
28        return ans;
29    }
30};