/**
 * @file Two_Sum_II_Input_Array_Is_Sorted.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 167 on Leetcode. 
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) 
{
    int *result = NULL;
    result = (int *) malloc((*returnSize) * sizeof(int));

    int l = 0, r = numbersSize - 1;
    while (l < r)
    {
        if(numbers[l] + numbers[r] < target)
            { ++l; }
        
        else if(numbers[l] + numbers[r] > target)
            { --r; }
        
        else if(numbers[l] + numbers[r] == target)
            { break; }
    }
    
    result[0] = ++l, result[1] = ++r;
    
    return result;
}

int main()
{
    int numbers[] = {2,7,11,15};
    int target = 9;
    int size = 2;
    int *res = twoSum(numbers, sizeof(numbers) / sizeof(numbers[0]), target, &size);
    
    printf("Result: ");
    for(int i = 0; i < size; ++i)
        printf("%d ", res[i]);
    
    return 0;
}   