// Last updated: 14/06/2026, 14:45:02
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4       vector<int>ans ;
5       for(int x : nums){
6        if(x % 2  == 0){
7            ans.push_back(x);
8        }
9       }
10
11       for(int x : nums){
12        if(x%2!= 0){
13            ans.push_back(x);
14        }
15       }
16
17       return ans;
18    }
19};