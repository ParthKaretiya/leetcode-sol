// Last updated: 21/05/2026, 13:27:32
1class Solution {
2public:
3    int returnToBoundaryCount(vector<int>& nums) {
4
5        int position = 0;
6        int count = 0;
7
8        for(int x : nums) {
9
10            position += x;
11
12            // ant returned to boundary
13            if(position == 0) {
14                count++;
15            }
16        }
17
18        return count;
19    }
20};