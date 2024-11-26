/**
 * @file countAndSay.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 38 on Leetcode.
 */
function RLE(input: string): string {
    if (input.length === 0) return "";

    let result = "";
    let count = 1;
    for (let i = 1; i < input.length; i++) {
        if (input[i] === input[i - 1]) {
            count++;
        } else {
            result += input[i - 1] + count;
            count = 1;
        }
    }
    result += input[input.length - 1] + count;
    return result;
}

function countAndSay(n: number): string {
    if (n === 1) return "1";

    let prev = "1";
    for (let i = 2; i <= n; ++i) {
        prev = RLE(prev);
    }
    return prev.split("").reverse().join("");
}
