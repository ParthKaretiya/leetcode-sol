// Last updated: 07/05/2026, 10:09:05
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1, mp2;

        // count frequency in words1
        for (string w : words1) {
            mp1[w]++;
        }

        // count frequency in words2
        for (string w : words2) {
            mp2[w]++;
        }

        int count = 0;

        // check words appearing exactly once in both
        for (auto it : mp1) {
            if (it.second == 1 && mp2[it.first] == 1) {
                count++;
            }
        }

        return count;
    }
};