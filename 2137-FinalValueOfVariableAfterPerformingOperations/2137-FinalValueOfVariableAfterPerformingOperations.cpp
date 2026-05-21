// Last updated: 21/05/2026, 11:08:40
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int x = 0;

        for(string op : operations){

            if(op == "++X" || op == "X++"){
                x++;
            }
            else{
                x--;
            }
        }

        return x;
    }
};