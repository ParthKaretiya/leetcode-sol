// Last updated: 15/05/2026, 12:05:21
1class Solution {
2public:
3    bool isAcronym(vector<string>& words, string s) {
4        
5        string ans = "";
6
7        for(string word : words){
8            ans += word[0];
9        }
10
11        return ans == s;
12    }
13};