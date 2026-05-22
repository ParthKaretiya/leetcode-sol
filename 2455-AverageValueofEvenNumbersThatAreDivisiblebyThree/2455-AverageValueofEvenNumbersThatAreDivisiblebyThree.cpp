// Last updated: 22/05/2026, 20:40:44
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4        
5        int sum = 0;
6        int count = 0;
7
8        for(int i = 0; i < nums.size(); i++) {
9            
10            // divisible by both 2 and 3
11            if(nums[i] % 6 == 0) {
12                
13                sum += nums[i];
14                count++;
15            }
16        }
17
18        if(count == 0) {
19            return 0;
20        }
21
22        return sum / count;
23    }
24};