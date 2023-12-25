/**
 * Drinks
 * December 24th 2023
 * @author : Mostafa_Asaad
*/

/* Includes */
#include <stdio.h>
#include <stdlib.h>

/* Main Function */
int main(void) {
    int number_of_drinks = 1;
    scanf("%d", &number_of_drinks);

    int *percentage = (int *) calloc(number_of_drinks, sizeof(int));
    for (int l_counter = 0; l_counter < number_of_drinks; ++l_counter)
    {
        scanf("%d", &percentage[l_counter]);
    }
    
    double sum_of_percentages = 0;
    for (int l_counter = 0; l_counter < number_of_drinks; ++l_counter)
    {
        sum_of_percentages += percentage[l_counter];
    }

    printf("%.12f", (sum_of_percentages / number_of_drinks));
    free(percentage);
}