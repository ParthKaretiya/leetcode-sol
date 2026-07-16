// Last updated: 16/07/2026, 14:09:37
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size()-1;
6        int ans = 0 ;
7        while(left < right){
8             int area = min(height[left], height[right]) * (right - left);
9
10             if(area >ans){
11                ans = area;
12             }
13
14             if(height[left] < height[right]){
15                left++;
16             }
17             else{
18                right--;
19             }
20        }
21        return ans;
22    }
23};