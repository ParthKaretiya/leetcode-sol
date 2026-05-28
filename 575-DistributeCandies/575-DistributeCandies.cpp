// Last updated: 28/05/2026, 09:52:39
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        set<int>s;
5        int n = candyType.size()/2;
6        for(int x : candyType){
7            s.insert(x);
8        }
9        if(s.size()>=n){
10            return n;
11        }
12        return s.size();
13    }
14};