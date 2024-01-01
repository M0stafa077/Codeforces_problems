/**
 * Sale
 * Jan 01st 2024
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int number_of_sets, max_carry, l_counter;
    scanf("%d %d", &number_of_sets, &max_carry);

    int *TV_prices = (int *) calloc(number_of_sets, sizeof(int));
    for(l_counter = 0; l_counter < number_of_sets; ++l_counter)
        scanf("%d", &TV_prices[l_counter]);

    ASC_sort(TV_prices, number_of_sets);     

    int max_profit = 0;
    for(l_counter = 0; l_counter < max_carry; ++l_counter)
        if (TV_prices[l_counter] < 0)
            max_profit += TV_prices[l_counter];

    max_profit *= -1;
    printf("%d", max_profit);    
}