// Last updated: 24/04/2026, 09:56:43
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }

        for(auto it : m){
            if(it.second > nums.size() / 2){
                return it.first;
            }
        }

        return -1; 
    }
};