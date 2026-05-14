// Last updated: 14/05/2026, 11:23:29
1class Solution {
2public:
3    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
4
5        int busy = 0;
6
7        for(int i = 0; i < startTime.size(); i++){
8
9            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
10                busy++;
11            }
12        }
13
14        return busy;
15    }
16};