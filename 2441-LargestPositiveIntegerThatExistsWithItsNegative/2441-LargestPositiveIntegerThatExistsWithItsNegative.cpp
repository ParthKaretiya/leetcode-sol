// Last updated: 24/05/2026, 17:32:03
1class Solution {
2public:
3    int findMaxK(vector<int>& nums) {
4
5        set<int> s;
6
7        for(int num : nums){
8            s.insert(num);
9        }
10
11        int ans = -1;
12
13        for(int num : nums){
14
15            if(s.find(-num) != s.end()){
16
17                ans = max(ans, num);
18            }
19        }
20
21        return ans;
22    }
23};