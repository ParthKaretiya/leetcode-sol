// Last updated: 24/04/2026, 09:57:23
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1 = strs[0];
        for(int i=1 ; i<strs.size() ; i++){
            while(strs[i].find(s1) != 0){
                s1.pop_back();

                if(s1.empty())
                return "";
            }

        }
        return s1;
    }
};