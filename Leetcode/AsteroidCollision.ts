/**
 * @file AsteroidCollision.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 735 on Leetcode.
 */
function asteroidCollision(asteroids: number[]): number[] {
    const res: number[] = [];

    for (let i of asteroids) {
        while (res.length > 0 && res[res.length - 1] > 0 && i < 0) {
            const top = res[res.length - 1];

            if (top < -i) {
                res.pop();
                continue;
            } else if (top === -i) {
                res.pop();
                i = 0;
            }

            break;
        }

        if (i !== 0 && (res.length === 0 || res[res.length - 1] < 0 || i > 0)) {
            res.push(i);
        }
    }

    return res;
}
