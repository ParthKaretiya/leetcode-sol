// Last updated: 09/05/2026, 10:50:38
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4
5        unordered_set<int> st;
6
7        // store positive numbers
8        for(int x : nums) {
9
10            if(x > 0) {
11                st.insert(x);
12            }
13        }
14
15        // check from 1
16        for(int i = 1; i <= nums.size() + 1; i++) {
17
18            if(st.count(i) == 0) {
19                return i;
20            }
21        }
22
23        return 1;
24    }
25};