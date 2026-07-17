// Last updated: 7/17/2026, 1:10:00 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        set<long long> s;
5
6        for (int num : nums) {
7            s.insert(num);
8            if (s.size() > 3)
9                s.erase(s.begin());
10        }
11
12        if (s.size() == 3)
13            return *s.begin();
14
15        return *s.rbegin();
16    }
17};