// Last updated: 7/13/2026, 1:19:31 PM
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            if(arr[i] == arr[i + n / 4]) {
                return arr[i];
            }
        }

        return -1;
    }
};