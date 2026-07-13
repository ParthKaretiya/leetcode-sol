// Last updated: 7/13/2026, 1:18:22 PM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int total = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int count = ((i + 1) * (n - i) + 1) / 2;
            total += arr[i] * count;
        }

        return total;
    }
};