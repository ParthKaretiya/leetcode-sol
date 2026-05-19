// Last updated: 19/05/2026, 15:47:34
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        
5        for(int i = 0; i < flowerbed.size(); i++) {
6
7            if(flowerbed[i] == 0) {
8
9                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
10                bool rightEmpty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
11
12                if(leftEmpty && rightEmpty) {
13                    flowerbed[i] = 1;
14                    n--;
15                }
16            }
17        }
18
19        return n <= 0;
20    }
21};