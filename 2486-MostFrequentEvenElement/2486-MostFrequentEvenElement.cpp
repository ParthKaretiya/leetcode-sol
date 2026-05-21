// Last updated: 21/05/2026, 11:07:52
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        map<int,int> mp;

        for (int x : nums) {
            if (x % 2 == 0) {
                mp[x]++;
            }
        }

        int ans = -1;
        int maxi = 0;

        for (auto it : mp) {

            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};