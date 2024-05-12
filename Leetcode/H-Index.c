/**
 * @file Jump_Game_II.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 274 on Leetcode. 
*/
#include <stdio.h>

void ASC_sort(int *array, int size)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < size; ++f_counter)
    {
        key = array[f_counter];
        i = f_counter - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }
}


int hIndex(int* citations, int citationsSize) 
{
    int max = 0;
    /* 1. Sort thr array in ASC Order */
    ASC_sort(citations, citationsSize);

    for(int i = 1; i <= citationsSize; ++i)
    {
        if(i > citations[citationsSize - i])
            return i - 1;
    }
    
    return 0;
}

int main()
{
    int arr[] = {1, 3, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Result = %d\n", hIndex(arr, arrSize));
    return 0;
}