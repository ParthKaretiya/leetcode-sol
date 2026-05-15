// Last updated: 15/05/2026, 12:03:11
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        
5        int maxi = 0;
6
7        for(string s : sentences){
8
9            int count = 1;
10
11            for(char ch : s){
12
13                if(ch == ' '){
14                    count++;
15                }
16            }
17
18            maxi = max(maxi, count);
19        }
20
21        return maxi;
22    }
23};