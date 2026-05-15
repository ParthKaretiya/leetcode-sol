// Last updated: 15/05/2026, 11:47:07
1class Solution {
2public:
3    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
4        int index = 0;
5
6        if(ruleKey == "type"){
7            index = 0;
8        }
9        else if(ruleKey == "color"){
10            index = 1;
11        }
12        else{
13            index = 2;
14        }
15
16        int count = 0;
17
18        for(auto item : items){
19            if(item[index] == ruleValue){
20                count++;
21            }
22        }
23
24        return count;
25    }
26};