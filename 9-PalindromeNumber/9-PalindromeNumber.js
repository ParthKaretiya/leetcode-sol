// Last updated: 24/04/2026, 09:57:36
var isPalindrome = function(x) {
    if (x < 0) return false;   // negative numbers are not palindrome

    let original = x;
    let reversed = 0;

    while (x > 0) {
        let digit = x % 10;
        reversed = reversed * 10 + digit;
        x = Math.floor(x / 10);
    }

    return original === reversed;
};
