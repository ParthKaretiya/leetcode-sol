// Last updated: 8/24/2026, 9:22:20 AM
1class Solution {
2public:
3    int stoneGameVIII(vector<int>& stones) {
4        int n = stones.size();
5
6        vector<int> prefix(n);
7        prefix[0] = stones[0];
8
9        for (int i = 1; i < n; i++)
10            prefix[i] = prefix[i - 1] + stones[i];
11
12        int best = prefix[n - 1];
13
14        for (int i = n - 2; i >= 1; i--) {
15            best = max(best, prefix[i] - best);
16        }
17
18        return best;
19    }
20};