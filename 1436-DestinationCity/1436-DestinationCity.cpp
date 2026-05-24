// Last updated: 24/05/2026, 16:33:01
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) {
4
5        set<string> s;
6
7        for(auto path : paths){
8            s.insert(path[0]);
9        }
10
11        for(auto path : paths){
12
13            if(s.find(path[1]) == s.end()){
14                return path[1];
15            }
16        }
17
18        return "";
19    }
20};