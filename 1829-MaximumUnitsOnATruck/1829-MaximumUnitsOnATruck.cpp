// Last updated: 21/05/2026, 11:08:51
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        // sort highest units first
        sort(boxTypes.begin(), boxTypes.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });

        int total = 0;

        for(auto box : boxTypes) {

            int numberOfBoxes = box[0];
            int unitsPerBox = box[1];

            // take minimum possible boxes
            int take = min(numberOfBoxes, truckSize);

            total += take * unitsPerBox;

            truckSize -= take;
        }

        return total;
    }
};