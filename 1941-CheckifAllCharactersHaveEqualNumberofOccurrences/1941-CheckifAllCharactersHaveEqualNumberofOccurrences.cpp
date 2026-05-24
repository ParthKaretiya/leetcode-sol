// Last updated: 24/05/2026, 17:14:39
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4
5        unordered_map<char , int> m1;
6
7        for(char c : s){
8            m1[c]++;
9        }
10
11        set<int> s1;
12
13        for(auto it : m1){
14            s1.insert(it.second);
15        }
16
17        return s1.size() == 1;
18    }
19};