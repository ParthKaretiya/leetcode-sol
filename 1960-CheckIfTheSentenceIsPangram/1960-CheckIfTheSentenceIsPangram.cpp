// Last updated: 7/13/2026, 1:17:32 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        set<char>s;
        for(char c : sentence){
            s.insert(c);
        }

        return s.size() == 26;
    }
};