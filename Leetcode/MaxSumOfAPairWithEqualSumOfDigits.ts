function sumOfDigits(num: number): number {
    return num
        .toString()
        .split("")
        .reduce((sum, digit) => sum + Number(digit), 0);
}

function maximumSum(nums: number[]): number {
    let max = -1;
    const map = new Map<number, [number, number]>();

    for (const el of nums) {
        const sum = sumOfDigits(el);
        const [max1, max2 = -1] = map.get(sum) || [-1, -1];

        if (el > max1) {
            map.set(sum, [el, max1]);
        } else if (el > max2) {
            map.set(sum, [max1, el]);
        }
    }

    for (const [max1, max2] of map.values()) {
        if (max2 !== -1) {
            max = Math.max(max, max1 + max2);
        }
    }

    return max;
}
