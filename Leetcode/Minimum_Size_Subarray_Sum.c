/**
 * @file    Minimum_Size_Subarray_Sum.c
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem number 209 on Leetcode.
 *              => Sliding Window <=
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int minSubArrayLen(int target, int* nums, int numsSize) 
{
    int l = 0, r = 0, total = 0;
    int res = numsSize + 1;

    while (r < numsSize)
    {
        total += nums[r];
        while (total >= target)
        {
            res = fmin(res, r - l + 1);
            total -= nums[l];
            ++l;
        }
        ++r;
    }
    
    return (res == numsSize + 1) ? 0 : res;
}

int main()
{   
    int nums[] = {2,3,1,2,4,3};
    int target = 7;
    int numsSize = sizeof(nums) / sizeof(nums[0]); 
    printf("Result: %d\n", minSubArrayLen(target, nums, numsSize));

    return 0;
}