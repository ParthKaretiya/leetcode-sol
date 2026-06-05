// Last updated: 05/06/2026, 14:37:56
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5
6        for (int i = 0; i < s.size(); i++) {
7
8           
9            if (!st.empty() && st.top() == s[i]) {
10                st.pop();
11            }
12            else {
13                st.push(s[i]);
14            }
15        }
16
17        string ans = "";
18
19     
20        while (!st.empty()) {
21            ans = st.top() + ans;
22            st.pop();
23        }
24
25
26
27        return ans;
28    }
29};