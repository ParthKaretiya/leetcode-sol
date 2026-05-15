// Last updated: 15/05/2026, 11:53:08
1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4        
5        int negativeCount = 0;
6
7        for(int x : nums){
8
9            if(x == 0){
10                return 0;
11            }
12
13            if(x < 0){
14                negativeCount++;
15            }
16        }
17
18        if(negativeCount % 2 == 0){
19            return 1;
20        }
21
22        return -1;
23    }
24};