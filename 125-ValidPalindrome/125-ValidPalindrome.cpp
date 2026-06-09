// Last updated: 09/06/2026, 15:51:38
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string temp = "";
5
6        // for loop to keep only letters and digits
7        for (char ch : s) {
8            if ((ch >= 'a' && ch <= 'z') ||
9                (ch >= 'A' && ch <= 'Z') ||
10                (ch >= '0' && ch <= '9')) {
11
12                // convert uppercase to lowercase
13                if (ch >= 'A' && ch <= 'Z') {
14                    ch = ch + 32;
15                }
16
17                temp += ch;
18            }
19        }
20
21        // Two pointers using while loop
22        int left = 0;
23        int right = temp.length() - 1;
24
25        while (left < right) {
26            if (temp[left] != temp[right]) {
27                return false;
28            }
29
30            left++;
31            right--;
32        }
33
34        return true;
35    }
36};