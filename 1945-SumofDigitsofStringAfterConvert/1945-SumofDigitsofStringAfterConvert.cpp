// Last updated: 21/05/2026, 10:29:32
1class Solution {
2public:
3    int getLucky(string s, int k) {
4
5        string num = "";
6
7        // Step 1: Convert characters into numbers
8        for(char ch : s) {
9
10            int value = ch - 'a' + 1;
11
12            num += to_string(value);
13        }
14
15        // Step 2: Perform k transformations
16        while(k--) {
17
18            int sum = 0;
19            int i = 0;
20
21            // Calculate digit sum
22            while(i < num.size()) {
23
24                sum += num[i] - '0';
25                i++;
26            }
27
28            // Convert sum back to string
29            num = to_string(sum);
30        }
31
32        return stoi(num);
33    }
34};