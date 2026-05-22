// Last updated: 22/05/2026, 20:41:33
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {

        int position = 0;
        int count = 0;

        for(int x : nums) {

            position += x;

            // ant returned to boundary
            if(position == 0) {
                count++;
            }
        }

        return count;
    }
};