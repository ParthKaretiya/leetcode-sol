// Last updated: 24/04/2026, 09:57:00
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> m;

        for(string word : strs){
            string temp = word;
            sort(temp.begin(), temp.end());
            m[temp].push_back(word);
        }

        vector<vector<string>> result;

        for(auto &it : m){
            result.push_back(it.second);
        }

        return result;
    }
};