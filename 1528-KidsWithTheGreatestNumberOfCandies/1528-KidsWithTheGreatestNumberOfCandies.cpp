// Last updated: 21/05/2026, 11:09:07
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = 0;

        // find maximum candies
        for(int x : candies){
            if(x > maxi){
                maxi = x;
            }
        }

        vector<bool> ans;

        // check every kid
        for(int x : candies){

            if(x + extraCandies >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};