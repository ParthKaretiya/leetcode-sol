// Last updated: 7/13/2026, 1:20:34 PM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row : image) {
            reverse(row.begin(), row.end());

            for (int &x : row)
                x = 1 - x;
        }

        return image;
    }
};