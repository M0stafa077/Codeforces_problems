/**
 * @file IncreasingTripletSubsequence.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 334 on Leetcode.
 */

function increasingTriplet(nums: number[]): boolean {
    let i = Infinity,
        j = Infinity;

    for (let k of nums) {
        if (i >= k) i = k;
        else if (j >= k) j = k;
        else return true;
    }

    return false;
}

console.log(increasingTriplet([5, 4, 3, 2, 1]));
