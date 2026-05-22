// Last updated: 22/05/2026, 20:41:38
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist = 0;
        while(mainTank>=5){
            mainTank-=5;
            dist = dist + 50;
            if(additionalTank > 0){
                mainTank++;
                additionalTank--;
            }

            
        }
           dist += mainTank * 10;
           return dist;
        
    }
};