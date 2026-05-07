// Last updated: 07/05/2026, 08:45:15
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        unordered_map<char, int> mp;
5
6        // count frequency
7        for (char c : text) {
8            mp[c]++;
9        }
10
11        // compute answer
12        int ans = min({
13            mp['b'],
14            mp['a'],
15            mp['l'] / 2,
16            mp['o'] / 2,
17            mp['n']
18        });
19
20        return ans;
21    }
22};