// Last updated: 29/07/2026, 13:20:14
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7        int closest = nums[0] + nums[1] + nums[2];
8
9        for (int i = 0; i < n - 2; i++) {
10            int left = i + 1;
11            int right = n - 1;
12
13            while (left < right) {
14                int sum = nums[i] + nums[left] + nums[right];
15
16                // Update the closest sum
17                if (abs(sum - target) < abs(closest - target)) {
18                    closest = sum;
19                }
20
21                // Move pointers
22                if (sum < target) {
23                    left++;
24                }
25                else if (sum > target) {
26                    right--;
27                }
28                else {
29                    // Exact match found
30                    return sum;
31                }
32            }
33        }
34
35        return closest;
36    }
37};