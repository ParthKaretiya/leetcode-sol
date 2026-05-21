// Last updated: 21/05/2026, 11:08:17
class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_set<char> st;

        for (char c : s) {

            // already seen
            if (st.count(c)) {
                return c;
            }

            st.insert(c);
        }

        return ' ';
    }
};