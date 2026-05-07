// Last updated: 07/05/2026, 10:08:54
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;

        // alternate merge
        while (i < word1.length() && j < word2.length()) {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }

        // remaining characters
        while (i < word1.length()) {
            ans += word1[i];
            i++;
        }

        while (j < word2.length()) {
            ans += word2[j];
            j++;
        }

        return ans;
    }
};