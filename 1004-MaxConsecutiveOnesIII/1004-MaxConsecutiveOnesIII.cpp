// Last updated: 7/14/2026, 2:33:41 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0;
5        int zeros = 0;
6        int ans = 0;
7
8        for (int right = 0; right < nums.size(); right++) {
9            if (nums[right] == 0)
10                zeros++;
11
12            while (zeros > k) {
13                if (nums[left] == 0)
14                    zeros--;
15                left++;
16            }
17
18            ans = max(ans, right - left + 1);
19        }
20
21        return ans;
22    }
23};