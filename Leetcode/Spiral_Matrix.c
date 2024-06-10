/**
 * @file Spiral_Mtrix.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 54 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) 
{
    int top = 0, bottom = matrixSize - 1;
    int left = 0, right = (*matrixColSize) - 1;
    int resultCounter = 0;
    int i = 0;
    
    *returnSize = matrixSize * (*matrixColSize);
    int *result = (int *) malloc((*returnSize) * sizeof(int));
    
    while((top <= bottom) && (left <= right))
    {
        /* Traverse from left to right */
        for(i = left; i <= right; ++i)
        {
            result[resultCounter++] = matrix[top][i];
        }
        ++top;

        /* Traverse from top to bottom */
        for(i = top; i <= bottom; ++i)
        {
            result[resultCounter++] = matrix[i][right];
        }
        --right;

        if(top <= bottom)
        {    /* Traverse from rigth to left */
            for(i = right; i >= left; --i)
            {
                result[resultCounter++] = matrix[bottom][i];
            }
            --bottom;
        }

        if(left <= right)
        {
            /* Traverse from bottom to top */
            for(i = bottom; i >= top; --i)
            {
                result[resultCounter++] = matrix[i][left];
            }
            ++left;
        }
    }
    return result;
}


int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};


    int* matrixPtrs[9];
    for (int i = 0; i < 9; i++) 
    {
        matrixPtrs[i] = matrix[i];
    }

    int matrixColSize = 3;
    int returnSize = 9;
    int* result = spiralOrder(matrixPtrs, 3, &matrixColSize, &returnSize);

    printf("Result: [");
    for(int i = 0; i < returnSize; ++i)
    {
        printf("%d, ", result[i]);
    }
    printf("\b\b]\n");

    free(result);
    return 0;
}