// Last updated: 04/06/2026, 17:17:39
1class Solution {
2public:
3    string decodeString(string s) {
4
5        stack<string> st;
6        stack<int> num;
7
8        string str = "";
9        int number = 0;
10
11        for (int i = 0; i < s.size(); i++) {
12
13            // if digit
14            if (isdigit(s[i])) {
15                number = number * 10 + (s[i] - '0');
16            }
17
18            // if [
19            else if (s[i] == '[') {
20
21                num.push(number);
22                st.push(str);
23
24                number = 0;
25                str = "";
26            }
27
28            // if ]
29            else if (s[i] == ']') {
30
31                int times = num.top();
32                num.pop();
33
34                string prev = st.top();
35                st.pop();
36
37                string temp = "";
38
39                while (times > 0) {
40                    temp += str ;
41                    times--;
42                }
43
44                str = prev + temp;
45            }
46
47            // normal character
48            else {
49                str += s[i];
50            }
51        }
52
53        return str;
54    }
55};