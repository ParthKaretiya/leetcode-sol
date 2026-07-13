// Last updated: 7/13/2026, 1:19:29 PM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        unordered_map<int, int> mp;

        int rank = 1;

        // assign ranks
        for(int x : temp) {

            if(mp.find(x) == mp.end()) {
                mp[x] = rank;
                rank++;
            }
        }

        // replace with rank
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};