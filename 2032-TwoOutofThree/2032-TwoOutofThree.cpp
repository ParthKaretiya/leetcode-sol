// Last updated: 24/05/2026, 18:50:47
1class Solution {
2public:
3    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
4
5        set<int> s1, s2, s3;
6
7        for(int x : nums1){
8            s1.insert(x);
9        }
10
11        for(int x : nums2){
12            s2.insert(x);
13        }
14
15        for(int x : nums3){
16            s3.insert(x);
17        }
18
19        set<int> ans;
20
21        for(int x : s1){
22
23            if(s2.find(x) != s2.end() || s3.find(x) != s3.end()){
24                ans.insert(x);
25            }
26        }
27
28        for(int x : s2){
29
30            if(s1.find(x) != s1.end() || s3.find(x) != s3.end()){
31                ans.insert(x);
32            }
33        }
34
35        vector<int> result;
36
37        for(int x : ans){
38            result.push_back(x);
39        }
40
41        return result;
42    }
43};