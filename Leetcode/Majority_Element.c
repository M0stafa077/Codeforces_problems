/**
 * @file Remove_Duplicates_from_Sorted_Array_II.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 169 on Leetcode. 
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMS_SIZE   (sizeof(nums) / sizeof(nums[0]))

void sort_array(int* array, int arraySize)
{
    unsigned int i = 0, j = 0;
    int temp = 0;

    for (i = 0; i < arraySize - 1; ++i) 
    {
        for (j = 0; j < arraySize - i - 1; ++j) 
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int majorityElement(int* nums, int numsSize) 
{
    unsigned int i = 0;
    unsigned int count = 1;

    if((1 == numsSize) || (2 == numsSize))
        { return nums[0]; } 

    /* First sort the array */
    sort_array(nums, numsSize);

    /* Apply the two pointers algorithm */
    for(i = 0; i < numsSize; ++i)
    {
        if(nums[i] == nums[i + (int)(numsSize / 2)])
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    int nums[] = {5, 6, 5, 6, 5,};
    
    int majority_element = majorityElement(nums, NUMS_SIZE);

    printf("majority_element = %d\n", majority_element);
}