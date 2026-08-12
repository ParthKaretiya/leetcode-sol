// Last updated: 12/08/2026, 10:18:25
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        unordered_map<int, int> freq;
5
6        int left = 0;
7        int ans = 0;
8
9        for (int right = 0; right < nums.size(); right++) {
10            freq[nums[right]]++;
11
12            // If any element appears more than k times
13            while (freq[nums[right]] > k) {
14                freq[nums[left]]--;
15                left++;
16            }
17
18            ans = max(ans, right - left + 1);
19        }
20
21        return ans;
22    }
23};