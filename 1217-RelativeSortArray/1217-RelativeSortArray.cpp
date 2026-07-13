// Last updated: 7/13/2026, 1:19:37 PM
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> mp;

        // count frequency
        for(int x : arr1) {
            mp[x]++;
        }

        vector<int> ans;

        // place elements according to arr2
        for(int x : arr2) {

            while(mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        // remaining elements
        vector<int> rem;

        for(auto it : mp) {

            while(it.second > 0) {
                rem.push_back(it.first);
                it.second--;
            }
        }

        sort(rem.begin(), rem.end());

        // add remaining elements
        for(int x : rem) {
            ans.push_back(x);
        }

        return ans;
    }
};