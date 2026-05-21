// Last updated: 21/05/2026, 11:07:50
class Solution {
public:

    int reverseNum(int n) {

        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        return rev;
    }

    int countDistinctIntegers(vector<int>& nums) {

        unordered_set<int> st;

        for (int x : nums) {

            st.insert(x);

            st.insert(reverseNum(x));
        }

        return st.size();
    }
};