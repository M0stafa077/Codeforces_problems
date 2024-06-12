/**
 * @file Rotate_Image.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 48 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>

// void rotate(int** matrix, int matrixSize, int* matrixColSize) 
// {
//     int **copyOfMatrix = NULL;
//     copyOfMatrix = (int **) malloc(matrixSize * sizeof(int *));
//     for(int i = 0; i < matrixSize; ++i)
//         { copyOfMatrix[i] = (int *) malloc(matrixSize * sizeof(int)); }
//     for(int i = 0; i < matrixSize; ++i)
//     {
//         for(int j = 0; j < matrixSize; ++j)
//             { copyOfMatrix[i][j] = matrix[i][j]; }
//     }
    
//     for(int i = 0; i < matrixSize; ++i)
//     {
//         for(int j = 0; j < matrixSize; ++j)
//             { matrix[i][j] = copyOfMatrix[matrixSize - j - 1][i]; }
//     }

//     for(int i = 0; i < matrixSize; ++i)
//         { free(copyOfMatrix[i]); }
//     free(copyOfMatrix); 
// }

void rotate(int** matrix, int matrixSize, int* matrixColSize) 
{
    int temp = 0;
    for(int i = 0; i < matrixSize; ++i)
    {
        for(int j = i; j < matrixSize; ++j)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i = 0; i < matrixSize; ++i)
    {
        for(int j = 0; j < matrixSize/2; ++j)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize - j - 1];
            matrix[i][matrixSize - j - 1] = temp;
        }
    }
}

int main()
{
    int matrix [3][3] = {{1,2,3},
                         {4,5,6}, 
                         {7,8,9}};

    printf("Original Matrix:\n");
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }



    int* matrixPtrs[9];
    for(int i = 0; i < 9; ++i)
        { matrixPtrs[i] = matrix[i]; }

    int matrixColSize = 3;
    rotate(matrixPtrs, 3, &matrixColSize);

    printf("Result:\n");
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}