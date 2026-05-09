// Last updated: 09/05/2026, 11:07:41
1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4
5        // sort highest units first
6        sort(boxTypes.begin(), boxTypes.end(),
7        [](vector<int>& a, vector<int>& b) {
8            return a[1] > b[1];
9        });
10
11        int total = 0;
12
13        for(auto box : boxTypes) {
14
15            int numberOfBoxes = box[0];
16            int unitsPerBox = box[1];
17
18            // take minimum possible boxes
19            int take = min(numberOfBoxes, truckSize);
20
21            total += take * unitsPerBox;
22
23            truckSize -= take;
24        }
25
26        return total;
27    }
28};