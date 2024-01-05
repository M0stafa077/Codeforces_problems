/**
 * Reconnaissance
 * Jan 2nd 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "helper_functions/helper_functions.h"

void solve(int *array, int size, int max_diff);

int main(void)
{
    int number_of_soldiers, d, *soldiers_hights, l_counter, count = 0;
    scanf("%d %d", &number_of_soldiers, &d);

    soldiers_hights = (int *) calloc(number_of_soldiers, sizeof(int));
    get_intArray(soldiers_hights, number_of_soldiers);

    DSC_sort(soldiers_hights, number_of_soldiers);

    solve(soldiers_hights, number_of_soldiers, d);

    free(soldiers_hights);
}

void solve(int *array, int size, int max_diff)
{
    int count = 0;
    for(int current_soldier = 0; current_soldier < size ; ++current_soldier)
    {
        for(int test_soldier = 0; test_soldier < size; ++test_soldier)
        {
            if (current_soldier == test_soldier)
                continue;

            int hight_diff = abs(array[current_soldier] - array[test_soldier]);
            if(hight_diff <= max_diff)
                count++;
        }
    }
    printf("%d\n", count);
}
