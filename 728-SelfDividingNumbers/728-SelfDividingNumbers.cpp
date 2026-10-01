// Last updated: 01/10/2026, 16:28:17
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int> v;
5
6        for (int i = left; i <= right; i++) {
7            int curr = i;
8            bool valid = true;
9
10            while (curr > 0) {
11                int rem = curr % 10;
12
13                if (rem == 0 || i % rem != 0) {
14                    valid = false;
15                    break;
16                }
17
18                curr = curr / 10;
19            }
20
21            if (valid) {
22                v.push_back(i);
23            }
24        }
25
26        return v;
27    }
28};