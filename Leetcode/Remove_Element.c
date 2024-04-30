/**
 * @file Remove_Element.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 27 on Leetcode.
 * (https://leetcode.com/problems/remove-element) 
 * with solution run-time = 0 ms
 */
#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) 
{
    unsigned int i = 0, j = 0, k = 0;
    for(i = 0; i < numsSize; ++i)
    {
        if(nums[i] == val)
        {
            for(j = i + 1; j < numsSize; ++j)
                nums[j - 1] = nums[j]; 
                
            --i, --numsSize;
        }
        else
            ++k;
    }
    return k;
}

int main()
{
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int k = removeElement(nums, 8, 2);

    printf("k = %d\n", k);
    printf("nums: ");
    for(int i = 0; i < 8; ++i)
    {
        printf("%d ", nums[i]);
    }
}