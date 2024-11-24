/**
 * @file Insert_Delete_GetRandom_O1.ts
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 50 on Leetcode.
 */

function myPow(x: number, n: number): number {
    if(n === 0) return 1;
    if(x === 1 || n === 1) return x;
    if(x === -1) return n % 2 == 0 ? 1 : -1;
    
    if (n < 0) {
      return 1 / myPow(x, -1 * n);
    }
    if (n % 2 === 0) {
      return myPow(x * x, n / 2); 
    } else {
      return x * myPow(x * x, (n - 1) / 2);
    }
};
