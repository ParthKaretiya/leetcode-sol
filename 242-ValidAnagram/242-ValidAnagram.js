// Last updated: 24/04/2026, 09:56:33
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;

    let a = s.split("").sort().join("");
    let b = t.split("").sort().join("");

    return a === b;
};
