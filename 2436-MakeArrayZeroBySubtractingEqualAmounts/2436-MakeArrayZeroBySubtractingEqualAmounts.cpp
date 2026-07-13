// Last updated: 7/13/2026, 1:16:30 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st;

        for (int num : nums) {
            if (num > 0) {
                st.insert(num);
            }
        }

        return st.size();
    }
};