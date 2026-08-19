// Last updated: 8/19/2026, 11:41:57 AM
1class Solution {
2public:
3    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
4        unordered_map<int, unordered_set<int>> reserved;
5
6        // Store reserved seats row-wise
7        for (auto &seat : reservedSeats) {
8            reserved[seat[0]].insert(seat[1]);
9        }
10
11        int ans = (n - reserved.size()) * 2;
12
13        for (auto &[row, seats] : reserved) {
14            
15            bool left = true;
16            bool middle = true;
17            bool right = true;
18
19            // Check 2,3,4,5
20            for (int s = 2; s <= 5; s++) {
21                if (seats.count(s)) {
22                    left = false;
23                    break;
24                }
25            }
26
27            // Check 4,5,6,7
28            for (int s = 4; s <= 7; s++) {
29                if (seats.count(s)) {
30                    middle = false;
31                    break;
32                }
33            }
34
35            // Check 6,7,8,9
36            for (int s = 6; s <= 9; s++) {
37                if (seats.count(s)) {
38                    right = false;
39                    break;
40                }
41            }
42
43            if (left && right) {
44                ans += 2;
45            }
46            else if (left || middle || right) {
47                ans += 1;
48            }
49        }
50
51        return ans;
52    }
53};