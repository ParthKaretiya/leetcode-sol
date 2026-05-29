// Last updated: 29/05/2026, 16:17:25
1class Solution {
2public:
3    double average(vector<int>& salary) {
4        sort(salary.begin(), salary.end());
5
6        int sum = 0;
7
8        for(int i = 1; i < salary.size() - 1; i++) {
9            sum += salary[i];
10        }
11
12        return (double)sum / (salary.size() - 2);
13    }
14};