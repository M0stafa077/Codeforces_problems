/**
 * @file RemovingStarsFromAString.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 2390 on Leetcode.
 */

function removeStars(s: string): string {
    const n = s.length;
    let p = 0;
    const stack: string[] = [];

    while (p < n) {
        if (s[p] === "*") {
            stack.pop();
            ++p;
        } else {
            stack.push(s[p++]);
        }
    }

    return stack.join("");
}

console.log(removeStars("leet**cod*e"));
