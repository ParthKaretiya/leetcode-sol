// Last updated: 24/05/2026, 14:45:17
1class Solution {
2public:
3    bool isUgly(int n) {
4
5        if(n <= 0){
6            return false;
7        }
8
9        int arr[3] = {2,3,5};
10
11        for(int i=0; i<3; i++){
12
13            while(n % arr[i] == 0){
14                n = n / arr[i];
15            }
16        }
17
18        return n == 1;
19    }
20};