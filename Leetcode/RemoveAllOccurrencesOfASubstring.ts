/**
 * @file RemoveAllOccurrencesOfASubstring.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 1910 on Leetcode.
 */

function removeOccurrences(s: string, part: string): string {
    const k = part.length - 1;
    let p = k;

    while (p < s.length) {
        if (s.slice(p - k, p + 1) === part) {
            return removeOccurrences(s.replace(part, ""), part);
        } else {
            p++;
        }
    }

    return s;
}
