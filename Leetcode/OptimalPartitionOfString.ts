/**
 * @file OptimalPartitionOfString.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 2405 on Leetcode.
 */

function partitionString(s: string): number {
    const set = new Set();
    let k = 0;
    let count = 1;

    while (k < s.length) {
        if (set.has(s[k])) {
            count++;
            set.clear();
        } else {
            set.add(s[k++]);
        }
    }
    return count;
}
