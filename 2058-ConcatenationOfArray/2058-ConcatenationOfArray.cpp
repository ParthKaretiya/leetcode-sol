// Last updated: 21/05/2026, 11:08:44
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v1;
        for(int x : nums){
            v1.push_back(x);
        }
        for(int x : nums){
            v1.push_back(x);
        }
        return v1;
    }
};