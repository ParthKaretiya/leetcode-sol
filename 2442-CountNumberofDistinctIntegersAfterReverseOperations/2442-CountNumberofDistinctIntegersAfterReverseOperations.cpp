// Last updated: 08/05/2026, 17:44:11
1class Solution {
2public:
3
4    int reverseNum(int n) {
5
6        int rev = 0;
7
8        while (n > 0) {
9            rev = rev * 10 + n % 10;
10            n /= 10;
11        }
12
13        return rev;
14    }
15
16    int countDistinctIntegers(vector<int>& nums) {
17
18        unordered_set<int> st;
19
20        for (int x : nums) {
21
22            st.insert(x);
23
24            st.insert(reverseNum(x));
25        }
26
27        return st.size();
28    }
29};