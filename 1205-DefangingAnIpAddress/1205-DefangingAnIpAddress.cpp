// Last updated: 7/13/2026, 1:19:43 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for (char c : address) {
            if (c == '.')
                ans += "[.]";
            else
                ans += c;
        }

        return ans;
    }
};