/**
 * @file Merge_Sorted_Array.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 88 on Leetcode.
 * (https://leetcode.com/problems/merge-sorted-array)
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;

/* Ascending sort function */
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

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    uint32_t counter = 0, i = m;
    for(; i < m + n; ++i)
    {
        nums1[i] = nums2[counter++];
    }

    /* Sort nums[i] */
    ASC_sort(nums1, m + n);

    printf("Nums: ");
    for(i = 0; i < m + n; ++i)
    {
        printf("%d ", nums1[i]);
    }
}


int main()
{
    int nums1[] = {1, 2, 3, 4, 5, 6, 0, 0, 0};
    int nums2[] = {1, 2, 3};

    merge(nums1, 9, 6, nums2, 3, 3);

    return 0;
}