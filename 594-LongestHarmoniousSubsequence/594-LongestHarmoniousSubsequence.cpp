// Last updated: 18/07/2026, 10:26:44
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
16            int num = it.first;
17
18            int nextNumber = num + 1;       
19            
20            if (m.count(nextNumber) > 0) {
21
22                int currentFrequency = it.second;
23    
24                int nextFrequency = m[nextNumber];
25
26                int totalLength = currentFrequency + nextFrequency;
27
28                if (totalLength > ans) {
29                    ans = totalLength;
30                }
31            }
32        }
33
34        return ans;
35    }
36};