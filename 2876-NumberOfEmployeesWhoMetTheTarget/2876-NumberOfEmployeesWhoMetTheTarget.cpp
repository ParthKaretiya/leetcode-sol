// Last updated: 21/05/2026, 11:07:40
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        int count = 0;

        for(int x : hours){

            if(x >= target){
                count++;
            }
        }

        return count;
    }
};