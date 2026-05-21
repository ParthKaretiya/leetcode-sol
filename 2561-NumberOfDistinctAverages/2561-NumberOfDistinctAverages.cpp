// Last updated: 21/05/2026, 11:07:47
class Solution {
public:
    int distinctAverages(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        unordered_set<double> st;

        while (i < j) {

            double avg = (nums[i] + nums[j]) / 2.0;

            st.insert(avg);

            i++;
            j--;
        }

        return st.size();
    }
};