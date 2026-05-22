// Last updated: 22/05/2026, 20:42:00
class Solution {
public:
    string digitSum(string s, int k) {

        // repeat until size becomes <= k
        while(s.size() > k) {

            string temp = "";

            int i = 0;

            // process in groups of k
            while(i < s.size()) {

                int sum = 0;
                int count = 0;

                // take k characters
                while(i < s.size() && count < k) {

                    sum += s[i] - '0';

                    i++;
                    count++;
                }

                // add sum into new string
                temp += to_string(sum);
            }

            s = temp;
        }

        return s;
    }
};