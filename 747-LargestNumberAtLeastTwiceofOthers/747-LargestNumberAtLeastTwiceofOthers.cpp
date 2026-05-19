// Last updated: 19/05/2026, 18:02:39
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        
5        int maxi = INT_MIN;
6        int index = -1;
7
8        // Find maximum element and its index
9        for(int i = 0; i < nums.size(); i++) {
10
11            if(nums[i] > maxi) {
12                maxi = nums[i];
13                index = i;
14            }
15        }
16
17        // Check dominant condition
18        for(int i = 0; i < nums.size(); i++) {
19
20            if(i != index && maxi < 2 * nums[i]) {
21                return -1;
22            }
23        }
24
25        return index;
26    }
27};