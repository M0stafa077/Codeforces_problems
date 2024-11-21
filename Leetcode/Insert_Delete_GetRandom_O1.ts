/**
 * @file Insert_Delete_GetRandom_O1.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 380 on Leetcode.
 */

class RandomizedSet {
    private map: Map<number, number>;
    private list: number[];
    constructor() {
        this.map = new Map();
        this.list = [];
    }

    insert(val: number): boolean {
        if (this.map.has(val)) return false;
        const length = this.list.push(val);
        this.map.set(val, length - 1);
        return true;
    }

    remove(val: number): boolean {
        if (!this.map.has(val)) return false;
        const idx = this.map.get(val);

        this.list[idx] = this.list[this.length - 1];
        this.map.set(this.list[this.length - 1], idx);

        this.list.pop();
        this.map.delete(val);
        return true;
    }

    getRandom(): number {
        const idx = Math.floor(Math.random() * this.length);
        return this.list[idx];
    }
    private get length() {
        return this.list.length;
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
