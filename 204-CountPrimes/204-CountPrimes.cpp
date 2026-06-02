// Last updated: 02/06/2026, 11:27:31
1class Solution {
2public:
3    int countPrimes(int n) {
4
5        if(n <= 2) {
6            return 0;
7        }
8
9        vector<bool> prime(n, true);
10
11        prime[0] = prime[1] = false;
12
13        for(int i = 2; i * i < n; i++) {
14
15            if(prime[i]) {
16
17                for(int j = i * i; j < n; j += i) {
18                    prime[j] = false;
19                }
20            }
21        }
22
23        int count = 0;
24
25        for(int i = 2; i < n; i++) {
26
27            if(prime[i]) {
28                count++;
29            }
30        }
31
32        return count;
33    }
34};