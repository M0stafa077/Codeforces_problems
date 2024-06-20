/**
 * @file Summery_Ranges.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 228 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) 
{
    char **res = NULL;
    res = (char **) malloc(numsSize * sizeof(char *));
    for(int i = 0; i < numsSize; i++)
        { res[i] = (char *) malloc(50 * sizeof(char)); }     
    int start = 0, end = start, counter = 0;

    while(start < numsSize)
    {
        while ((end < numsSize - 1) && ((long)nums[end + 1] - (long)nums[end] == 1))
            { end++; }
        {
            if(start == end)
                { sprintf(res[counter++], "%d\0", nums[start]); }
            else
                { sprintf(res[counter++], "%d->%d\0", nums[start], nums[end]); }

            start = end + 1;
            end = start;
        }
    }

    *returnSize = counter;
    return res;
}

int main()
{
    int nums[] = {-2147483648, -2147483647, 2147483647};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize = 0;
    char **res = summaryRanges(nums, numsSize, &returnSize);

    printf("Result: \n");

    for(int i = 0; i < returnSize; ++i)
    {
        printf("%s, ", res[i]);
    }
    
    for(int i = 0; i < returnSize; ++i)
    {
        free(res[i]);
    }
    free(res);

    return 0;
}