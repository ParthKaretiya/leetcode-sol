// Last updated: 24/05/2026, 15:50:55
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        
5        set<char>s;
6        for(char c : sentence){
7            s.insert(c);
8        }
9
10        return s.size() == 26;
11    }
12};