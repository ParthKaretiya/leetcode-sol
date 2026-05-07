// Last updated: 07/05/2026, 10:09:09
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;

        // count frequency
        for (char c : text) {
            mp[c]++;
        }

        // compute answer
        int ans = min({
            mp['b'],
            mp['a'],
            mp['l'] / 2,
            mp['o'] / 2,
            mp['n']
        });

        return ans;
    }
};