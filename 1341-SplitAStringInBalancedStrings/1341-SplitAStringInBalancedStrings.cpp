// Last updated: 7/13/2026, 1:19:17 PM
class Solution {
public:
    int balancedStringSplit(string s) {
     int count = 0;
     int balance = 0;

     for(char ch :s ){
        if(ch == 'L'){
            balance ++;
        }
        else{
            balance --;
        }

        if(balance == 0){
            count ++;
        }
     }  
     return count; 
    }
};