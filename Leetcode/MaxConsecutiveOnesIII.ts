/**
 * @file MaxConsecutiveOnesIII.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 1004 on Leetcode.
 */

function longestOnes(nums: number[], k: number): number {
    let [left, right, res, zeroCount] = [0, 0, 0, 0];
    const n = nums.length;

    while (right < n) {
        if (nums[right++] === 0) {
            zeroCount++;
        }
        while (zeroCount > k) {
            if (nums[left] === 0) {
                zeroCount--;
            }
            left++;
        }
        res = Math.max(res, right - left);
    }
    return res;
}

console.log(longestOnes([1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0], 2));
