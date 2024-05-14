/**
 * @file Trapping_Rain_Water.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 42 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int trap(int* height, int heightSize) 
{
    int res = 0;
    int l = 0, r = heightSize - 1;
    int leftMax = height[l], rightMax = height[r];  

    while (l < r)
    {
        if(leftMax < rightMax)
        {
            ++l;
            leftMax = fmax(leftMax, height[l]);
            res += (leftMax - height[l]);
        }
        else
        {
            --r;
            rightMax = fmax(rightMax, height[r]);
            res += (rightMax - height[r]);
        }
    }    
    return res;
}

int main()
{
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int res = trap(height, sizeof(height) / sizeof(height[0]));

    printf("Result: %d\n", res);
    return 0;
}   