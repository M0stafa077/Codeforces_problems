/**
 * @file Set_Matrix_Zeroes.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 73 on Leetcode. 
 */

#include <stdio.h>
#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) 
{
    int **hashTable = (int **) malloc(matrixSize * sizeof(int *));
    for(int i = 0; i < matrixSize; ++i)
        { hashTable[i] = (int *) malloc((*matrixColSize) * sizeof(int)); }

    for(int i = 0; i < matrixSize; ++i)
    {
        for(int j = 0; j < (*matrixColSize); ++j)
        {
            if((0 == matrix[i][j]) && (!hashTable[i][j]))
            {                
                /* Set the row and column */
                for(int row = 0; row < matrixSize; row++)
                { 
                    if(matrix[row][j] != 0)
                    {
                        matrix[row][j] = 0; 
                        hashTable[row][j] = 1; 
                    }
                }
                
                for(int col = 0; col < (*matrixColSize); col++)
                { 
                    if(matrix[i][col] != 0)
                    {
                        matrix[i][col] = 0; 
                        hashTable[i][col] = 1; 
                    }
                }
            }
        }
    }
    for(int i = 0; i < matrixSize; ++i)
        { free(hashTable[i]); }
    free(hashTable);
}

int main()
{
    int matrix[3][4] = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int* matrixPtrs[12];
    for(int i = 0; i < 12; ++i)
        { matrixPtrs[i] = matrix[i]; }
    
    printf("Original Matrix:\n");
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int x = 4;
    setZeroes(matrixPtrs, 3, &x);

    printf("Result:\n");
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}