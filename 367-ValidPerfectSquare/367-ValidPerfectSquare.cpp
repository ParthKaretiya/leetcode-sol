// Last updated: 24/05/2026, 15:00:26
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4
5        long long i = 1;
6
7        while(i * i <= num){
8
9            if(i * i == num){
10                return true;
11            }
12
13            i++;
14        }
15
16        return false;
17    }
18};