// Last updated: 8/29/2026, 12:53:54 PM
1class Solution {
2public:
3    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
4        int n = nums.size();
5
6        vector<int> sorted = nums;
7        sort(sorted.begin(), sorted.end());
8
9        unordered_map<int, vector<int>> group;
10        unordered_map<int, int> groupId;
11        unordered_map<int, int> pos;
12
13        int id = 1;
14
15        // Build groups
16        group[id].push_back(sorted[0]);
17
18        for(int i = 1; i < n; i++){
19            if(sorted[i] - sorted[i - 1] > limit){
20                id++;
21            }
22
23            group[id].push_back(sorted[i]);
24        }
25
26        // Store group id of every value
27        id = 1;
28
29        for(int i = 0; i < n; i++){
30            if(i > 0 && sorted[i] - sorted[i - 1] > limit){
31                id++;
32            }
33
34            groupId[sorted[i]] = id;
35        }
36
37        // Position pointer for each group
38        for(int i = 1; i <= id; i++){
39            pos[i] = 0;
40        }
41
42        // Rebuild nums using the smallest
43        // available value from its group
44        for(int i = 0; i < n; i++){
45            int grp = groupId[nums[i]];
46
47            nums[i] = group[grp][pos[grp]];
48            pos[grp]++;
49        }
50
51        return nums;
52    }
53};