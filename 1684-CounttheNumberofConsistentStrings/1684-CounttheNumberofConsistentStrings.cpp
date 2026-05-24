// Last updated: 24/05/2026, 15:55:34
1class Solution {
2public:
3    int countConsistentStrings(string allowed, vector<string>& words) {
4
5        set<char> s;
6
7        for(char ch : allowed){
8            s.insert(ch);
9        }
10
11        int count = 0;
12
13        for(string word : words){
14
15            bool ok = true;
16
17            for(char ch : word){
18
19                if(s.find(ch) == s.end()){
20                    ok = false;
21                    break;
22                }
23            }
24
25            if(ok){
26                count++;
27            }
28        }
29
30        return count;
31    }
32};