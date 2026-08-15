// Last updated: 8/15/2026, 7:41:53 PM
1class Solution {
2public:
3    int longestSubsequence(vector<int>& nums) {
4        int n = nums.size();
5        int xr = 0;
6        bool hasNonZero = false;
7
8        for (int x : nums) {
9            xr ^= x;
10
11            if (x != 0)
12                hasNonZero = true;
13        }
14
15        if (xr != 0)
16            return n;
17
18        if (hasNonZero)
19            return n - 1;
20
21        return 0;
22    }
23};