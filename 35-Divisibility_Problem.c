/**
 * Divisibility Problem
 * December 27th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number_of_test_cases;
    scanf("%d", &number_of_test_cases);
    int l_counter = 0; 
    int *summing = (int *) calloc(number_of_test_cases, sizeof(int));

    for (l_counter = 0; l_counter < number_of_test_cases; l_counter++)
    {
        
        int number1, number2, sum = 0;
        scanf("%d %d", &number1, &number2);
        /* Check if number1 is less than number2 */
        if (0 == number1 % number2){
            summing[l_counter] = 0;
            continue;
        }
        else {
            int mod = number1 % number2;
            summing[l_counter] = number2 - mod;
        }
        
    }

    /* Print the result */
    for (l_counter = 0; l_counter < number_of_test_cases; l_counter++)
        printf("%d\n", summing[l_counter]);
        
}