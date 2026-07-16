// Last updated: 7/16/2026, 11:40:18 AM
1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int left = 0, right = arr.size() - 1;
5
6        while (left < right) {
7            int mid = left + (right - left) / 2;
8
9            if (arr[mid] < arr[mid + 1])
10                left = mid + 1;
11            else
12                right = mid;
13        }
14
15        return left;
16    }
17};