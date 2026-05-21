// Last updated: 21/05/2026, 11:09:20
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = 0;
        int n = arr.size();

        // Count zeros
        for (int num : arr) {
            if (num == 0) {
                zeros++;
            }
        }

        // Traverse from back
        for (int i = n - 1; i >= 0; i--) {

            // Place current element
            if (i + zeros < n) {
                arr[i + zeros] = arr[i];
            }

            // If zero, duplicate it
            if (arr[i] == 0) {
                zeros--;

                if (i + zeros < n) {
                    arr[i + zeros] = 0;
                }
            }
        }
    }
};