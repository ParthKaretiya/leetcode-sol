// Last updated: 13/06/2026, 11:23:12
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<string> ans;
5        string first = words[0];
6
7        for(char ch : first) {
8            bool present = true;
9
10            for(int i = 1; i < words.size(); i++) {
11                int pos = words[i].find(ch);
12
13                if(pos == string::npos) {
14                    present = false;
15                    break;
16                }
17
18                words[i].erase(pos, 1); 
19            }
20
21            if(present) {
22                ans.push_back(string(1, ch));
23            }
24        }
25
26        return ans;
27    }
28};