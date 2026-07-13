// Last updated: 7/13/2026, 1:18:08 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        set<char> s;

        for(char ch : allowed){
            s.insert(ch);
        }

        int count = 0;

        for(string word : words){

            bool ok = true;

            for(char ch : word){

                if(s.find(ch) == s.end()){
                    ok = false;
                    break;
                }
            }

            if(ok){
                count++;
            }
        }

        return count;
    }
};