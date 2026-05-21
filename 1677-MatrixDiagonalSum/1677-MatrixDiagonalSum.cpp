// Last updated: 21/05/2026, 11:08:58
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int sum = 0;
        int n = mat.size();

        for(int i = 0; i < n; i++){

            // primary diagonal
            sum += mat[i][i];

            // secondary diagonal
            if(i != n - i - 1){
                sum += mat[i][n - i - 1];
            }
        }

        return sum;
    }
};