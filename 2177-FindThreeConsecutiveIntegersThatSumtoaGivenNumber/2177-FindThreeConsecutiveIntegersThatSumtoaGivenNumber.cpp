// Last updated: 23/05/2026, 15:04:36
1class Solution {
2public:
3    vector<long long> sumOfThree(long long num) {
4
5        if(num % 3 != 0){
6            return {};
7        }
8
9        long long x = num / 3;
10
11        return {x - 1, x, x + 1};
12    }
13};