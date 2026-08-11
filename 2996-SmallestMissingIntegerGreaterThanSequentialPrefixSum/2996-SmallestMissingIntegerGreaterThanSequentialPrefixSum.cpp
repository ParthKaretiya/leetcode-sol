// Last updated: 11/08/2026, 09:19:32
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int n = nums.size();
5
6        // Find sum of the longest sequential prefix
7        int sum = nums[0];
8
9        for (int i = 1; i < n; i++) {
10            if (nums[i] == nums[i - 1] + 1) {
11                sum += nums[i];
12            } else {
13                break;
14            }
15        }
16
17        // Put all numbers in a set
18        unordered_set<int> st(nums.begin(), nums.end());
19
20        // Find the smallest number >= sum that is missing
21        while (st.count(sum)) {
22            sum++;
23        }
24
25        return sum;
26    }
27};