// Last updated: 21/05/2026, 11:08:42
class Solution {
public:
    int getLucky(string s, int k) {

        string num = "";

        // Step 1: Convert characters into numbers
        for(char ch : s) {

            int value = ch - 'a' + 1;

            num += to_string(value);
        }

        // Step 2: Perform k transformations
        while(k--) {

            int sum = 0;
            int i = 0;

            // Calculate digit sum
            while(i < num.size()) {

                sum += num[i] - '0';
                i++;
            }

            // Convert sum back to string
            num = to_string(sum);
        }

        return stoi(num);
    }
};