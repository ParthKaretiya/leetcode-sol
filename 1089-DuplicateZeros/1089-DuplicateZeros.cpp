// Last updated: 20/05/2026, 17:23:51
1class Solution {
2public:
3    void duplicateZeros(vector<int>& arr) {
4        int zeros = 0;
5        int n = arr.size();
6
7        // Count zeros
8        for (int num : arr) {
9            if (num == 0) {
10                zeros++;
11            }
12        }
13
14        // Traverse from back
15        for (int i = n - 1; i >= 0; i--) {
16
17            // Place current element
18            if (i + zeros < n) {
19                arr[i + zeros] = arr[i];
20            }
21
22            // If zero, duplicate it
23            if (arr[i] == 0) {
24                zeros--;
25
26                if (i + zeros < n) {
27                    arr[i + zeros] = 0;
28                }
29            }
30        }
31    }
32};