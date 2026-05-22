// Last updated: 22/05/2026, 20:42:39
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_map<int,int> mp;

        // count frequency
        for(int x : nums) {
            mp[x]++;
        }

        // find duplicate
        for(auto x : mp) {

            if(x.second > 1) {
                return x.first;
            }
        }

        return -1;
    }
};