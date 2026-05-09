// Last updated: 09/05/2026, 10:42:34
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4
5        unordered_set<int> st;
6
7        // store numbers
8        for(int x : nums) {
9            st.insert(x);
10        }
11
12        // check 0 to n
13        for(int i = 0; i <= nums.size(); i++) {
14
15            if(st.count(i) == 0) {
16                return i;
17            }
18        }
19
20        return -1;
21    }
22};