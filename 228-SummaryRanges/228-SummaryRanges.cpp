// Last updated: 08/06/2026, 09:35:16
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5
6        int j = 0;
7
8        for(int i = 0; i < nums.size(); i++) {
9
10            if(i + 1 == nums.size() || nums[i + 1] != nums[i] + 1) {
11
12                if(j == i) {
13                    ans.push_back(to_string(nums[i]));
14                }
15                else {
16                    ans.push_back(to_string(nums[j]) + "->" + to_string(nums[i]));
17                }
18
19                j = i + 1;
20            }
21        }
22
23        return ans;
24    }
25};