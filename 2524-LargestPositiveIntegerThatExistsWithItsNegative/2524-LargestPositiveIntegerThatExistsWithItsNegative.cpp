// Last updated: 7/13/2026, 1:16:17 PM
class Solution {
public:
    int findMaxK(vector<int>& nums) {

        set<int> s;

        for(int num : nums){
            s.insert(num);
        }

        int ans = -1;

        for(int num : nums){

            if(s.find(-num) != s.end()){

                ans = max(ans, num);
            }
        }

        return ans;
    }
};