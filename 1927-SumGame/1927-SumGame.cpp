// Last updated: 8/23/2026, 12:35:24 PM
1class Solution {
2public:
3    bool sumGame(string num) {
4        int n = num.size();
5        int half = n / 2;
6
7        int leftSum = 0, rightSum = 0;
8        int leftQ = 0, rightQ = 0;
9
10        for (int i = 0; i < half; i++) {
11            if (num[i] == '?')
12                leftQ++;
13            else
14                leftSum += num[i] - '0';
15        }
16
17        for (int i = half; i < n; i++) {
18            if (num[i] == '?')
19                rightQ++;
20            else
21                rightSum += num[i] - '0';
22        }
23
24        int diff = leftSum - rightSum;
25        int qDiff = leftQ - rightQ;
26
27        // Alice can force a win unless Bob can make the sums equal.
28        return 2 * diff + 9 * qDiff != 0;
29    }
30};