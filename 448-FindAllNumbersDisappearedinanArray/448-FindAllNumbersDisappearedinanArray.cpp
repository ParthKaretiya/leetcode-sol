// Last updated: 09/05/2026, 10:36:31
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        unordered_set<int> st;
5        for(int x : nums){
6            st.insert(x);
7        }
8        vector<int>ans;
9        for(int i=1;i<=nums.size();i++){
10            if(st.count(i)==0){
11                ans.push_back(i);
12            }
13        }
14        return ans;
15    }
16};