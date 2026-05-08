// Last updated: 08/05/2026, 12:18:03
1class Solution {
2public:
3    int distinctAverages(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int i = 0;
8        int j = nums.size() - 1;
9
10        unordered_set<double> st;
11
12        while (i < j) {
13
14            double avg = (nums[i] + nums[j]) / 2.0;
15
16            st.insert(avg);
17
18            i++;
19            j--;
20        }
21
22        return st.size();
23    }
24};