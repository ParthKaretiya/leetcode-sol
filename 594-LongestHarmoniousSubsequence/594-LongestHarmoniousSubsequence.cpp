// Last updated: 17/07/2026, 13:24:26
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4
5        unordered_map<int, int> m;
6
7  
8        for (int x : nums) {
9            m[x]++;
10        }
11
12        int ans = 0;
13
14        
15        for (auto it : m) {
16
17      
18            int num = it.first;
19
20
21            int nextNumber = num + 1;
22
23          
24            if (m.count(nextNumber) > 0) {
25
26                int currentFrequency = it.second;
27
28               
29                int nextFrequency = m[nextNumber];
30
31            
32                int totalLength = currentFrequency + nextFrequency;
33
34                if (totalLength > ans) {
35                    ans = totalLength;
36                }
37            }
38        }
39
40        return ans;
41    }
42};