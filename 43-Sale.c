/**
 * Sale
 * Jan 01st 2024
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>
#include "helper_functions/helper_functions.c"

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