// Last updated: 24/04/2026, 09:57:33
var removeDuplicates = function(nums) {
    if (nums.length === 0) return 0;

    let k = 1; // index for unique elements

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
};
