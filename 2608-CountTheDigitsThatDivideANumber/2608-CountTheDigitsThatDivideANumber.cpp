// Last updated: 21/05/2026, 11:07:44
class Solution {
public:
    int countDigits(int num) {
        int sum = 0;
        int dup = num ;
        while(dup>0){
            int rem = dup%10;
            if(num%rem ==0){
                sum ++;
            }
            dup = dup/10;
        }
        return sum;
    }
};