// Last updated: 9/30/2026, 3:51:35 PM
1class Solution {
2public:
3    vector<int> maxDepthAfterSplit(auto s) {
4        int n = s.size(); vector<int> res(n);
5        
6        for (int i = 0; i < n; i++)
7            res[i] = (i ^ s[i]) & 1;
8
9        return res;
10    }
11};