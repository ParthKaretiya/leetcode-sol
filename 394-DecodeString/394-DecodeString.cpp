// Last updated: 04/06/2026, 11:02:28
1class Solution {
2public:
3
4    string solve(string &s, int &i){
5
6        string result = "";
7        int num = 0;
8
9        while(i < s.size()){
10
11            // If digit
12            if(isdigit(s[i])){
13                num = num * 10 + (s[i] - '0');
14                i++;
15            }
16
17            // Opening bracket
18            else if(s[i] == '['){
19
20                i++; // move after '['
21
22                string temp = solve(s, i);
23
24                while(num--){
25                    result += temp;
26                }
27
28                num = 0;
29            }
30
31            // Closing bracket
32            else if(s[i] == ']'){
33
34                i++; // move after ']'
35                return result;
36            }
37
38            // Normal character
39            else{
40                result += s[i];
41                i++;
42            }
43        }
44
45        return result;
46    }
47
48    string decodeString(string s) {
49
50        int i = 0;
51        return solve(s, i);
52    }
53};