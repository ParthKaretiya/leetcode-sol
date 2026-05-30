// Last updated: 30/05/2026, 13:03:55
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int total = 0;
5        int n = arr.size();
6
7        for(int i = 0; i < n; i++) {
8            int count = ((i + 1) * (n - i) + 1) / 2;
9            total += arr[i] * count;
10        }
11
12        return total;
13    }
14};