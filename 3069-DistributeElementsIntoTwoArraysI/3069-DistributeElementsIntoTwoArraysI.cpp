// Last updated: 8/20/2026, 9:41:43 AM
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) {
4        vector<int> arr1, arr2;
5
6        arr1.push_back(nums[0]);
7        arr2.push_back(nums[1]);
8
9        for (int i = 2; i < nums.size(); i++) {
10            if (arr1.back() > arr2.back()) {
11                arr1.push_back(nums[i]);
12            } else {
13                arr2.push_back(nums[i]);
14            }
15        }
16
17        for (int x : arr2) {
18            arr1.push_back(x);
19        }
20
21        return arr1;
22    }
23};