// Last updated: 21/05/2026, 11:08:02
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {

        map<int, int> mp;

        // items1
        for (auto it : items1) {

            int value = it[0];
            int weight = it[1];

            mp[value] += weight;
        }

        // items2
        for (auto it : items2) {

            int value = it[0];
            int weight = it[1];

            mp[value] += weight;
        }

        vector<vector<int>> ans;

        // make final answer
        for (auto it : mp) {

            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};