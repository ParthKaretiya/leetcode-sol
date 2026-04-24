// Last updated: 24/04/2026, 09:56:45
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        // for loop to keep only letters and digits
        for (char ch : s) {
            if ((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z') ||
                (ch >= '0' && ch <= '9')) {

                // convert uppercase to lowercase
                if (ch >= 'A' && ch <= 'Z') {
                    ch = ch + 32;
                }

                temp += ch;
            }
        }

        // Two pointers using while loop
        int left = 0;
        int right = temp.length() - 1;

        while (left < right) {
            if (temp[left] != temp[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};