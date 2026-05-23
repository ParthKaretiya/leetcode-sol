// Last updated: 23/05/2026, 15:20:28
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4
5        vector<int> v1;
6
7        for(int i = left; i <= right; i++) {
8
9            int num = i;
10            bool valid = true;
11
12            while(num > 0) {
13
14                int rem = num % 10;
15
16                // check division by 0 and divisibility
17                if(rem == 0 || i % rem != 0) {
18                    valid = false;
19                    break;
20                }
21
22                num = num / 10;
23            }
24
25            // push only after checking all digits
26            if(valid) {
27                v1.push_back(i);
28            }
29        }
30
31        return v1;
32    }
33};