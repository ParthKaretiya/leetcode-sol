// Last updated: 7/13/2026, 1:19:53 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        string first = words[0];

        for(char ch : first) {
            bool present = true;

            for(int i = 1; i < words.size(); i++) {
                int pos = words[i].find(ch);

                if(pos == string::npos) {
                    present = false;
                    break;
                }

                words[i].erase(pos, 1); 
            }

            if(present) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};