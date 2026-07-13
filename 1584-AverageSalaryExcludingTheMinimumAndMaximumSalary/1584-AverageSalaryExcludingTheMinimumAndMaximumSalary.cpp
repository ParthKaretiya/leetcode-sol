// Last updated: 7/13/2026, 1:18:28 PM
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());

        int sum = 0;

        for(int i = 1; i < salary.size() - 1; i++) {
            sum += salary[i];
        }

        return (double)sum / (salary.size() - 2);
    }
};