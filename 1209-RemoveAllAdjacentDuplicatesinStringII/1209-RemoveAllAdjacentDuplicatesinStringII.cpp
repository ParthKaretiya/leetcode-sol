// Last updated: 05/06/2026, 17:33:38
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4
5        stack<pair<char,int>> st;
6
7        for(char ch : s) {
8
9            if(!st.empty() && st.top().first == ch) {
10                st.top().second++;
11            }
12            else {
13                st.push({ch,1});
14            }
15
16            if(st.top().second == k) {
17                st.pop();
18            }
19        }
20
21        string ans = "";
22
23        while(!st.empty()) {
24
25            char ch = st.top().first;
26            int cnt = st.top().second;
27
28            while(cnt--) {
29                ans += ch;
30            }
31
32            st.pop();
33        }
34
35        reverse(ans.begin(), ans.end());
36
37        return ans;
38    }
39};