// Last updated: 13/05/2026, 17:26:42
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4
5        vector<int> ans;
6
7        int i = 0;
8        int j = 0;
9
10        while(i < m && j < n){
11
12            if(nums1[i] < nums2[j]){
13                ans.push_back(nums1[i]);
14                i++;
15            }
16            else{
17                ans.push_back(nums2[j]);
18                j++;
19            }
20        }
21
22        while(i < m){
23            ans.push_back(nums1[i]);
24            i++;
25        }
26
27        while(j < n){
28            ans.push_back(nums2[j]);
29            j++;
30        }
31
32        nums1 = ans;
33    }
34};