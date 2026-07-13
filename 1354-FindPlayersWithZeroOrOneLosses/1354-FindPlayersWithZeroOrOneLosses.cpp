// Last updated: 7/13/2026, 1:19:15 PM
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int, int> lossCount;

        for(auto match : matches) {
            int winner = match[0];
            int loser = match[1];

            // ensure winner exists in map
            if(lossCount.find(winner) == lossCount.end()) {
                lossCount[winner] = 0;
            }

            // increase loser count
            lossCount[loser]++;
        }

        vector<int> zeroLoss;
        vector<int> oneLoss;

        for(auto player : lossCount) {
            if(player.second == 0) {
                zeroLoss.push_back(player.first);
            }
            else if(player.second == 1) {
                oneLoss.push_back(player.first);
            }
        }

        return {zeroLoss, oneLoss};
    }
};