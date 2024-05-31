/**
 * @file Single_Number.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 136 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) 
{
    int singleNumber = 0;
    for(int i = 0; i < numsSize; ++i)
        { singleNumber ^= nums[i]; }

    return singleNumber;
}

int main()
{
    int nums[] = {4,1,2,1,2};   /* 1 2 2 */
    printf("%d\n", singleNumber(nums, sizeof(nums) / sizeof(int)));
    return 0;
}