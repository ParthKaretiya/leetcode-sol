// Last updated: 7/13/2026, 1:20:44 PM
class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            c = tolower(c);
        }

        return s;
    }
};