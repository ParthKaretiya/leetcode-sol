// Last updated: 02/06/2026, 11:40:49
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1,
4                                   vector<int>& nums2) {
5
6        vector<int> ans;
7
8        for(int i = 0; i < nums1.size(); i++) {
9
10            int found = 0;
11            int nextGreater = -1;
12
13            for(int j = 0; j < nums2.size(); j++) {
14
15                if(nums1[i] == nums2[j]) {
16                    found = 1;
17                }
18
19                else if(found && nums2[j] > nums1[i]) {
20
21                    nextGreater = nums2[j];
22                    break;
23                }
24            }
25
26            ans.push_back(nextGreater);
27        }
28
29        return ans;
30    }
31};