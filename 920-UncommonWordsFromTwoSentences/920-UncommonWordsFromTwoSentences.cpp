// Last updated: 07/05/2026, 10:09:11
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> mp;

        stringstream ss1(s1), ss2(s2);

        string word;

        // words from s1
        while (ss1 >> word) {
            mp[word]++;
        }

        // words from s2
        while (ss2 >> word) {
            mp[word]++;
        }

        vector<string> ans;

        for (auto it : mp) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
