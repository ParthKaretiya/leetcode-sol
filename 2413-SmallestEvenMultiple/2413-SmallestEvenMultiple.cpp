// Last updated: 22/05/2026, 20:26:34
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4        if(n % 2 == 0){
5            return n;
6        }
7        
8        return n * 2;
9    }
10};