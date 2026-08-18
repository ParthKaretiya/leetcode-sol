// Last updated: 18/08/2026, 11:03:02
1class Solution {
2public:
3    int largestInteger(vector<int>& nums, int k) {
4        unordered_map<int, int> count;
5        int n = nums.size();
6
7        for (int i = 0; i <= n - k; i++) {
8            unordered_set<int> st;
9
10            // Current subarray
11            for (int j = i; j < i + k; j++) {
12                st.insert(nums[j]);
13            }
14
15            // Count this number once for this subarray
16            for (int x : st) {
17                count[x]++;
18            }
19        }
20
21        int ans = -1;
22
23        for (auto [x, freq] : count) {
24            if (freq == 1) {
25                ans = max(ans, x);
26            }
27        }
28
29        return ans;
30    }
31};