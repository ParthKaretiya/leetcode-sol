// Last updated: 7/13/2026, 1:19:58 PM
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;

        for (string email : emails) {
            string local = "", domain = "";
            int i = 0;

            while (email[i] != '@') {
                if (email[i] == '+')
                    break;

                if (email[i] != '.')
                    local += email[i];

                i++;
            }

            while (email[i] != '@')
                i++;

            domain = email.substr(i);

            st.insert(local + domain);
        }

        return st.size();
    }
};