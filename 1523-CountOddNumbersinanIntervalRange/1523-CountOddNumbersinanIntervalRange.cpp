// Last updated: 14/05/2026, 11:30:40
1class Solution {
2public:
3    int countOdds(int low, int high) {
4
5        int count = 0;
6
7        for(int i = low; i <= high; i++){
8
9            if(i % 2 == 1){
10                count++;
11            }
12        }
13
14        return count;
15    }
16};