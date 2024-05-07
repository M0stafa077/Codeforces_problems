/**
 * @file Remove_Duplicates_from_Sorted_Array_II.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 189 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>

void array_print(int* nums, int numsSize)
{
    printf("nums: ");
    for(int i = 0; i < numsSize; ++i)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void array_reverse(int* nums, int start, int end) 
{
    while (start < end) 
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    /* Adjust k */
    k %= numsSize;

    /* First: Reverse the entire array */
    array_reverse(nums, 0, numsSize - 1);

    /* Second: Reverse the first k elements */
    array_reverse(nums, 0, k - 1);

    /* Third: Reverse the rest of the array */
    array_reverse(nums, k, numsSize - 1);

}

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    array_print(nums, numsSize);

    int k = 3;
    rotate(nums, numsSize, k);
    printf("=========== After rotating by %d ===========\n", k);
    array_print(nums, numsSize);

    return 0;
}