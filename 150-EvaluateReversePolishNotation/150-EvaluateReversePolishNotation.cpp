// Last updated: 04/06/2026, 11:56:32
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4
5        stack<int> st;
6
7        for(string token : tokens){
8
9            // Operator
10            if(token == "+" || token == "-" || 
11               token == "*" || token == "/"){
12
13                int a = st.top();
14                st.pop();
15
16                int b = st.top();
17                st.pop();
18
19                if(token == "+"){
20                    st.push(b + a);
21                }
22                else if(token == "-"){
23                    st.push(b - a);
24                }
25                else if(token == "*"){
26                    st.push(b * a);
27                }
28                else{
29                    st.push(b / a);
30                }
31            }
32
33            // Number
34            else{
35                st.push(stoi(token));
36            }
37        }
38
39        return st.top();
40    }
41};