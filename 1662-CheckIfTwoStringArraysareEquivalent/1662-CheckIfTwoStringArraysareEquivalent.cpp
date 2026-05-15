// Last updated: 15/05/2026, 11:44:12
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4        string r1 = "";
5        string r2 = "";
6
7        for(string x : word1){
8            r1 = r1+x;
9        }
10       
11
12          for(string x : word2){
13            r2=r2+x;
14        }
15       
16
17        return r1 == r2;
18    }
19};