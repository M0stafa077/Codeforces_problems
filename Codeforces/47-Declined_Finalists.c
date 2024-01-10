/**
 * Declined Finalists
 * Jan 4 2024
 * @author: Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

/* Descending sort function */
void DSC_sort(int *array, int size)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < size; ++f_counter)
    {
        key = array[f_counter];
        i = f_counter - 1;
        while (i >= 0 && array[i] < key)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }    
}

int main()
{
    int number_of_contestants, l_counter, count = 0;
    scanf("%d", &number_of_contestants);

    int *contestants = (int *) calloc(number_of_contestants, sizeof(int));
    for(l_counter = 0; l_counter < number_of_contestants; ++l_counter)
        scanf("%d", &contestants[l_counter]);
    
    DSC_sort(contestants, number_of_contestants);
    
    if(contestants[0] < 25)
        printf("%d", 0);

    else
        printf("%d", contestants[0] - 25);

}