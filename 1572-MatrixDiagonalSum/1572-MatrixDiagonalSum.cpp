// Last updated: 14/05/2026, 13:28:46
1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4
5        int sum = 0;
6        int n = mat.size();
7
8        for(int i = 0; i < n; i++){
9
10            // primary diagonal
11            sum += mat[i][i];
12
13            // secondary diagonal
14            if(i != n - i - 1){
15                sum += mat[i][n - i - 1];
16            }
17        }
18
19        return sum;
20    }
21};