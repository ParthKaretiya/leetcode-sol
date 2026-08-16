// Last updated: 16/08/2026, 19:13:30
1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        int cnt[3] = {0};
5
6        for (int x : stones)
7            cnt[x % 3]++;
8
9        // If no remainder-1 or remainder-2 stone exists,
10        // Alice cannot make a valid first move.
11        if (cnt[1] == 0 && cnt[2] == 0)
12            return false;
13
14        // If cnt[0] is even, Alice wins when both sides
15        // have enough stones.
16        if (cnt[0] % 2 == 0)
17            return cnt[1] >= 1 && cnt[2] >= 1;
18
19        // cnt[0] is odd
20        return abs(cnt[1] - cnt[2]) > 2;
21    }
22};