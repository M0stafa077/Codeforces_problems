/**
 * @file Remove_Duplicates_From_Sorted_Array.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 26 on Leetcode. 
 */
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0) 
        return 0;

    unsigned int k = 1; 
    for (unsigned int i = 1; i < numsSize; ++i) 
    {
        if (nums[i] != nums[k - 1])
            nums[k++] = nums[i];
    }

    // Number of unique elements is one more than the uniqueIndex
    return k;
}
int main()
{
    int nums[] = {1, 1, 1, 2, 3, 4, 4};
    int numberOfUniqueElements = removeDuplicates(nums, sizeof(nums) / sizeof(nums[0]));

    printf("numberOfUniqueElements = %d\n", numberOfUniqueElements);
    printf("nums: ");
    for(int i = 0; i < numberOfUniqueElements; ++i)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}