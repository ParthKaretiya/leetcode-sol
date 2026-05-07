// Last updated: 07/05/2026, 10:09:13
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };

        unordered_set<string> s;

        for (string word : words) {

            string temp = "";

            for (char c : word) {
                temp += morse[c - 'a'];
            }

            s.insert(temp);
        }

        return s.size();
    }
};