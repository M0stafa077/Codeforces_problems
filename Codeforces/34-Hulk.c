/**
 * Hulk
 * December 25th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>

int main(void) {
    int number_of_layers, l_counter;
    scanf("%d", &number_of_layers);

    for (l_counter = 1; l_counter < number_of_layers; l_counter++)
    {
        if (!(l_counter % 2))
            printf("I love that ");
        else
            printf("I hate that ");    
    }
    if (!(number_of_layers % 2))
        printf("I love it");
    else
        printf("I hate it");
}