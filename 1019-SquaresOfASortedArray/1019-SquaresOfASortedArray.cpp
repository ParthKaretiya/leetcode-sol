// Last updated: 21/05/2026, 11:09:21
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>v1;

        for(int x : nums){
            v1.push_back(x*x);
        }

        sort(v1.begin() , v1.end());

        return v1;
    }
};