// Last updated: 7/20/2026, 9:13:59 AM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        
5        unordered_map<string, vector<string>> m;
6
7        for(string word : strs){
8            string temp = word;
9            sort(temp.begin(), temp.end());
10            m[temp].push_back(word);
11        }
12
13        vector<vector<string>> result;
14
15        for(auto &it : m){
16            result.push_back(it.second);
17        }
18
19        return result;
20    }
21};