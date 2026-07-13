// Last updated: 7/13/2026, 1:22:30 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
      
             while(n%3==0){
              n = n/3;
            
        }
        return n==1;

        
       
    }
};