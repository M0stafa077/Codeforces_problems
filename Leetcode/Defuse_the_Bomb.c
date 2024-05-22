/**
 * @file    Defuse_the_Bomb.c
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem number 1652 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) 
{
    *returnSize = codeSize;
    int *res = NULL;
    res = (int *) malloc(*returnSize * sizeof(int));
    
    for(int i = 0; i < codeSize; ++i)
            { res[i] = 0; }
    
    if(k == 0)
        { /* Nothing */ }

    else if(k > 0)
    {
        int i = 0;
        int curr_sum = 0;

        /* 1. Compute the sum of the first window */
        for(int sw = i + 1; sw <= k; sw++)
            { curr_sum += code[sw]; }

        res[i++] = curr_sum;

        /* 2. Compute the sum of the remaining windows */
        for(int sw = i + 1; sw <= codeSize; ++sw)
        {
            curr_sum += code[(sw + k - 1) % codeSize] - code[(sw - 1) % codeSize];
            res[i++] += curr_sum;
        }
    }

    else if(k < 0)
    {
        for (int i = 0; i < codeSize; ++i) 
        {
            int curr_sum = 0;
            
            for (int j = 1; j <= -k; ++j) 
            {
                curr_sum += code[(i - j + codeSize) % codeSize];
            }
            res[i] = curr_sum;
        }
    }

    return res;
}

int main()
{
    int code[] = {2,4,9,3};
    int codeSize = sizeof(code) / 4;
    int k = -2;
    int returnSize = 0;

    int *res = NULL;
    res = decrypt(code, codeSize, k, &returnSize);

    printf("Result: ");
    for(int i = 0; i < returnSize; ++i)
        { printf("%d ", res[i]); }

    free(res);
    return 0;
}