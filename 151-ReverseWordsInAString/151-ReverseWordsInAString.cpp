// Last updated: 24/04/2026, 09:56:44
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
// edge case
        if (!temp.empty()) {
            words.push_back(temp);
        }

        reverse(words.begin(), words.end());
        
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) result += " ";
        }

        return result;
    }
};
