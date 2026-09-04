// Last updated: 9/4/2026, 10:16:51 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> suffix(n, 0);
6
7        int mn = INT_MAX; 
8        // Build suffix minimum
9        for (int i = n - 1; i >= 0; i--){
10            mn = min(mn, nums[i]);
11            suffix[i] = mn;
12        }
13 
14        int mx = 0;
15        // Find first index with score <= k
16        for (int i = 0; i < n; i++){
17            mx = max(mx, nums[i]);
18            int score = mx - suffix[i];
19            if (score <= k) return i;
20        }
21 
22        return -1;
23    }
24};