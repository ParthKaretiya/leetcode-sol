// Last updated: 7/13/2026, 1:21:33 PM
class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b)
            return -1;

        return max(a.length(), b.length());
    }
};