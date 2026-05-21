// Last updated: 21/05/2026, 13:24:55
1class Solution {
2public:
3    int distanceTraveled(int mainTank, int additionalTank) {
4        int dist = 0;
5        while(mainTank>=5){
6            mainTank-=5;
7            dist = dist + 50;
8            if(additionalTank > 0){
9                mainTank++;
10                additionalTank--;
11            }
12
13            
14        }
15           dist += mainTank * 10;
16           return dist;
17        
18    }
19};