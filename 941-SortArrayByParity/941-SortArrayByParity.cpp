// Last updated: 7/13/2026, 1:20:04 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(int num : nums) {
            if(num % 2 == 0) {
                even.push_back(num);
            }
            else {
                odd.push_back(num);
            }
        }

        even.insert(even.end(), odd.begin(), odd.end());

        return even;
    }
};