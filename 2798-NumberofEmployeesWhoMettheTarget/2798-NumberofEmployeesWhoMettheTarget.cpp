// Last updated: 16/05/2026, 08:42:39
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        
5        int count = 0;
6
7        for(int x : hours){
8
9            if(x >= target){
10                count++;
11            }
12        }
13
14        return count;
15    }
16};