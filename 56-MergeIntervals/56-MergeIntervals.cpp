// Last updated: 8/21/2026, 1:31:10 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4       sort(intervals.begin(),intervals.end());
5
6       vector <vector<int>> ans;
7
8        for(auto interval : intervals ){
9            if(ans.empty() || ans.back()[1] < interval[0] ){
10                ans.push_back(interval);
11            }
12            else{
13                ans.back()[1] =  max(ans.back()[1],interval[1]);
14            }
15        }
16            return ans;
17
18    }
19};