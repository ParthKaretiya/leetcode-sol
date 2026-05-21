// Last updated: 21/05/2026, 11:09:31
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums){
            st.insert(x);
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(st.count(i)==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};