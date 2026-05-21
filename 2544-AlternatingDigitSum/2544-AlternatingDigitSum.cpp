// Last updated: 21/05/2026, 11:59:43
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4
5        vector<int> v1;
6
7        while(n > 0) {
8
9            int rem = n % 10;
10
11            v1.insert(v1.begin(), rem);
12
13            n = n / 10;
14        }
15
16        int sum = 0;
17
18        int x = v1.size();
19
20        for(int i = 0; i < x; i++) {
21
22            if(i % 2 == 0) {
23                sum = sum + v1[i];
24            }
25            else {
26                sum = sum - v1[i];
27            }
28        }
29
30        return sum;
31    }
32};