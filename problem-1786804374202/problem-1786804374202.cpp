// Last updated: 8/15/2026, 8:02:54 PM
1class Solution {
2public:
3    int elevatorRequests(int n, vector<int>& requests) {
4        int curr = 0,time = 0;
5
6        for(int floor : requests)
7        {
8            time += abs(curr - floor);
9            curr = floor;
10        }
11    return time;
12        }
13};