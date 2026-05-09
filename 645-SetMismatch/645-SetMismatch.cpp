// Last updated: 09/05/2026, 10:48:49
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4
5        map<int,int> mp;
6
7        // count frequency
8        for(int x : nums) {
9            mp[x]++;
10        }
11
12        int duplicate = -1;
13        int missing = -1;
14
15        // check 1 to n
16        for(int i = 1; i <= nums.size(); i++) {
17
18            // duplicate
19            if(mp[i] == 2) {
20                duplicate = i;
21            }
22
23            // missing
24            if(mp[i] == 0) {
25                missing = i;
26            }
27        }
28
29        return {duplicate, missing};
30    }
31};