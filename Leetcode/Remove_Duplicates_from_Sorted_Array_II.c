/**
 * @file Remove_Duplicates_from_Sorted_Array_II.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 80 on Leetcode. 
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief A software interface removes the duplicates in an array 
 * and leaves maximum two duplicates. 
 * @param nums A pointer to the array. 
 * @param numsSize The size of the array
 * @return int number of elements in the array after removing
 * the duplicates.
 */
int removeDuplicates(int *nums, int numsSize) 
{
    if (numsSize <= 2) return numsSize;

    /* keep the index which is to hold the next unique element */
    unsigned int k = 2;

    /* Traverse the array from index 2 or the third element, why??
     * As we desire to leave two duplicates maximum */
    for (int i = 2; i < numsSize; i++) 
    {
        /* Check if the current element is different from the two previous elements */
        if (nums[i] != nums[k - 2]) 
        {
            /* If different, place it at position k and move k to the next position */
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main()
{
    int nums[] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    int k = removeDuplicates(nums, 9);

    // shiftLeftByOne(nums, 9);

    printf("k = %d\n", k);

    printf("nums: ");
    for(int i = 0; i < 9; ++i)
    {
        printf("%d ", nums[i]);
    }
}