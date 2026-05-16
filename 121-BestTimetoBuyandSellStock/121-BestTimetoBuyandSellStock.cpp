// Last updated: 16/05/2026, 09:26:07
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = INT_MAX;
5        int maxProfit = 0;
6
7        for(int price : prices) {
8
9            if(price < minPrice) {
10                minPrice = price;
11            }
12
13            int profit = price - minPrice;
14
15            if(profit > maxProfit) {
16                maxProfit = profit;
17            }
18        }
19
20        return maxProfit;
21    }
22};