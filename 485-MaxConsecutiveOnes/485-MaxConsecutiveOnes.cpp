// Last updated: 13/05/2026, 17:32:50
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        
5        int count = 0;
6        int maxi = 0;
7
8        for(int x : nums){
9
10            if(x == 1){
11                count++;
12                maxi = max(maxi, count);
13            }
14            else{
15                count = 0;
16            }
17        }
18
19        return maxi;
20    }
21};