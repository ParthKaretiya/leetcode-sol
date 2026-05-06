// Last updated: 06/05/2026, 18:01:39
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        unordered_map<int, int> m;
5
6        for (int i = 0; i < nums.size(); i++) {
7            m[nums[i]]++;
8        }
9
10        int sum = 0;
11
12        for (auto it : m) {
13            if (it.second == 1) {
14                sum += it.first;
15            }
16        }
17
18        return sum;
19    }
20};