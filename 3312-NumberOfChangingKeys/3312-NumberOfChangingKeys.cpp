// Last updated: 7/13/2026, 1:15:12 PM
class Solution {
public:
    int countKeyChanges(string s) {
        int sum = 0;

        for(int i = 1; i < s.size(); i++) {
            if(tolower(s[i]) != tolower(s[i - 1]))
                sum++;
        }

        return sum;
    }
};