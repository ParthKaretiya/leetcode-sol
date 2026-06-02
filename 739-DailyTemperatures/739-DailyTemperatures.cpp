// Last updated: 02/06/2026, 11:26:10
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4
5        int n = temperatures.size();
6
7        vector<int> ans(n, 0);
8
9        stack<int> st;
10
11        for(int i = 0; i < n; i++) {
12
13            while(!st.empty() &&
14                  temperatures[i] > temperatures[st.top()]) {
15
16                int idx = st.top();
17                st.pop();
18
19                ans[idx] = i - idx;
20            }
21
22            st.push(i);
23        }
24
25        return ans;
26    }
27};