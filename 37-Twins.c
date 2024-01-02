/**
 * Twins
 * December 29th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>
#include "helper_functions/helper_functions.c"

int main(void) {
    int number_of_coins, l_counter, sum = 0, result = 0;
    scanf("%d", &number_of_coins); /* Get the number of coins */

    int *coins = (int *) calloc(number_of_coins, sizeof(int));

    /* Get the coins values */
    for (l_counter = 0; l_counter < number_of_coins; l_counter++)
    {
        scanf("%d", &coins[l_counter]);
        sum += coins[l_counter]; 
    }
    
    sum /= 2;
    DSC_sort(coins, number_of_coins);   /* Sort the array */

    for (l_counter = 0; l_counter < number_of_coins; ++l_counter)
    {
        /* Check if the sum of the first element(s) are bigger than the half */
        result += coins[l_counter]; 
        if (result > sum)
            break;      
    }

    /* Print the answer */
    printf("%d\n", ++l_counter); 
    free(coins);  
}