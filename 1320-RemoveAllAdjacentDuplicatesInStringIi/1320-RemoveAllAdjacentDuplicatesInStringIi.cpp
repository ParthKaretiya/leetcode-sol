// Last updated: 7/13/2026, 1:19:26 PM
class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char,int>> st;

        for(char ch : s) {

            if(!st.empty() && st.top().first == ch) {
                st.top().second++;
            }
            else {
                st.push({ch,1});
            }

            if(st.top().second == k) {
                st.pop();
            }
        }

        string ans = "";

        while(!st.empty()) {

            char ch = st.top().first;
            int cnt = st.top().second;

            while(cnt--) {
                ans += ch;
            }

            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};