// Last updated: 07/06/2026, 22:03:18
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        vector<int> even;
5        vector<int> odd;
6
7        for(int num : nums) {
8            if(num % 2 == 0) {
9                even.push_back(num);
10            }
11            else {
12                odd.push_back(num);
13            }
14        }
15
16        even.insert(even.end(), odd.begin(), odd.end());
17
18        return even;
19    }
20};