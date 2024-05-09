/**
 * @file Jump_Game.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 55 on Leetcode. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool canJump(int* nums, int numsSize)
{
    int goal = numsSize - 1;

    for(int i = numsSize - 1; i >= 0; --i)
    {
        if(i + nums[i] >= goal)
            goal = i;
    }
    
    return (goal == 0);
}

int main(void)
{
    int nums[] = {2,3,1,1,4 };
    int size = sizeof(nums) / sizeof(nums[0]);

    if(canJump(nums, size))
        { printf("Output: true\n"); }
    else
        { printf("Output: false\n"); }

}   