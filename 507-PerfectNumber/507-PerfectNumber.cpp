// Last updated: 23/05/2026, 15:29:40
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        vector<int>v1;
5        for(int i=1 ; i<= num/2 ; i++){
6                if(num %i == 0){
7                    v1.push_back(i);
8                }
9        }
10        int sum = 0; 
11        for(int x : v1){
12            sum = sum +  x;
13        }
14        if(sum == num){
15            return true;
16        }
17
18        return false;
19    }
20};