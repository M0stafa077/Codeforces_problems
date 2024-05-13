/**
 * @file Product_of_Array_Except_Self.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 238 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
    int *answer = (int *) malloc(numsSize * sizeof(int));

    if (numsSize == 2) {
        answer[0] = nums[1];
        answer[1] = nums[0];
        *returnSize = numsSize;
        return answer;
    }

    /* Fill the prefix array */
    int *prefix  = (int *) malloc(numsSize * sizeof(int));
    prefix[0] = 1;
    for (int i = 1; i < numsSize; ++i)  
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    /* Fill the postfix array */
    int *postfix = (int *) malloc(numsSize * sizeof(int));
    postfix[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; --i)  
    {
        postfix[i] = postfix[i + 1] * nums[i + 1];
    }

    /* Fill the result array */
    for (int i = 0; i < numsSize; ++i) 
    {
        answer[i] = prefix[i] * postfix[i];
    }

    free(prefix);
    free(postfix);
    *returnSize = numsSize;
    return answer;
}

int main()
{
    int nums[] = {9, 0, -2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int resSize = 0;
    int *res = productExceptSelf(nums, numsSize, &resSize);

    printf("Answer: ");    
    for(int i = 0; i < resSize; ++i)
    {
        printf("%d ", res[i]);
    }

    free(res);
    return 0;
}
