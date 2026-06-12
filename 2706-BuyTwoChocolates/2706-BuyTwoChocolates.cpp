// Last updated: 12/06/2026, 20:59:03
1class Solution {
2public:
3    int buyChoco(vector<int>& prices, int money) {
4        sort(prices.begin(), prices.end());
5
6        int cost = prices[0] + prices[1];
7
8        if (cost <= money) {
9            return money - cost;
10        }
11
12        return money;
13    }
14};