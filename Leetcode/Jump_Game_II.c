/**
 * @file Jump_Game_II.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 45 on Leetcode. 
*/
#include <stdio.h>

#define MAX(X, Y)       ((X) > (Y) ? (X) : (Y))

int jump(int* nums, int numsSize) 
{
    int number_of_jumps = 0;
    int l = 0, r = 0;

    while(r < (numsSize - 1))
    {
        int farthest = 0;
        
        for(int i = l; i <= r; ++i)
            { farthest = MAX(farthest, i + nums[i]); }
        
        l = r + 1;
        r = farthest;
        ++number_of_jumps;
    }

    return number_of_jumps;
}

int main()
{
    int nums[] = {2, 3, 1, 1, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Minimum number of jumps: %d\n", jump(nums, size));
    
    return 0;
}
