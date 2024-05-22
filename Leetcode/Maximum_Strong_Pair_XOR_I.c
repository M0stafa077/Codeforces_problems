/**
 * @file Maximum_Strong_Pair_XOR_I.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 2932 on Leetcode. 
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define IS_STRONG_PAIR(X, Y)    (abs((X) - (Y)) <= fmin((X), (Y)))
#define MAX(X, Y)               ((X) > (Y) ? (X) : (Y))

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int maximumStrongPairXor(int* nums, int numsSize) 
{
    int max_xor = 0;
    int l = 0, r = 0;

    /* Sort the array first */
    qsort(nums, numsSize, sizeof(int), compare);
    
    for(l = 0; l < numsSize; ++l)
    {
        r = l;
        while ((r < numsSize) && IS_STRONG_PAIR(nums[l], nums[r]))
        {
            max_xor = MAX(max_xor, (nums[l] ^ nums[r]));
           ++r;
        }
    }
    
    return max_xor;
}

int main()
{
    int nums[] = {1,1,10,3,9};   // result = 7

    int res = maximumStrongPairXor(nums, sizeof(nums) / 4);
    printf("Result: %d\n", res);
    
    return 0;
}