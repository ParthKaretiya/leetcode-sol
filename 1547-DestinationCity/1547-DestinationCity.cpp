// Last updated: 7/13/2026, 1:18:33 PM
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        set<string> s;

        for(auto path : paths){
            s.insert(path[0]);
        }

        for(auto path : paths){

            if(s.find(path[1]) == s.end()){
                return path[1];
            }
        }

        return "";
    }
};