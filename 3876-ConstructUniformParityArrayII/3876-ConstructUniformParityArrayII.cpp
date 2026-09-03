// Last updated: 9/3/2026, 10:36:38 AM
1class Solution {
2public:
3    bool uniformArray(auto& A) {
4        uint32_t x[2] = {-1u, -1u};
5
6        for (uint32_t a : A)
7            x[a & 1] = min(x[a & 1], a);
8
9        //TRUE IF: The min is odd || ∄ Odd elements  
10        return x[1] < x[0] | x[1] == -1u;
11    }
12};