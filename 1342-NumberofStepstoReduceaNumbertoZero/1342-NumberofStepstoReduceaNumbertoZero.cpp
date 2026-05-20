// Last updated: 20/05/2026, 17:30:12
1class Solution {
2public:
3    int numberOfSteps(int num) {
4
5        int steps = 0;
6
7        while (num != 0) {
8
9            if (num % 2 == 0) {
10                num /= 2;
11            }
12            else {
13                num -= 1;
14            }
15
16            steps++;
17        }
18
19        return steps;
20    }
21};