// Last updated: 7/13/2026, 1:19:56 PM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int , int>m;
        for(int x : nums){
            m[x]++;
        }

        for(auto it : m){
            if(it.second == n){
                return it.first;
            }
        }
        return -1;
    }
};