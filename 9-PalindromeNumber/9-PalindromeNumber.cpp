// Last updated: 24/04/2026, 09:57:28
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int original = x;
        long long sum = 0;  // 👈 changed to long long

        while(x > 0) {
            int rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }

        return sum == original;
    }
};