// Last updated: 14/05/2026, 10:54:20
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4
5        int maxi = 0;
6
7        // find maximum candies
8        for(int x : candies){
9            if(x > maxi){
10                maxi = x;
11            }
12        }
13
14        vector<bool> ans;
15
16        // check every kid
17        for(int x : candies){
18
19            if(x + extraCandies >= maxi){
20                ans.push_back(true);
21            }
22            else{
23                ans.push_back(false);
24            }
25        }
26
27        return ans;
28    }
29};