// Last updated: 21/05/2026, 11:09:06
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {

        int busy = 0;

        for(int i = 0; i < startTime.size(); i++){

            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
                busy++;
            }
        }

        return busy;
    }
};