// Last updated: 7/16/2026, 11:45:46 AM
1class Solution {
2public:
3    bool validMountainArray(vector<int>& arr) {
4        int n = arr.size();
5        int i = 0;
6
7        while (i + 1 < n && arr[i] < arr[i + 1])
8            i++;
9
10        if (i == 0 || i == n - 1)
11            return false;
12
13        while (i + 1 < n && arr[i] > arr[i + 1])
14            i++;
15
16        return i == n - 1;
17    }
18};