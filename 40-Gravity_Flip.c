/**
 * Gravity Flip
 * Dec 30th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>
#include "helper_functions/helper_functions.c"

int main(void) {
    int columns, l_counter;
    scanf("%d", &columns);
    
    int *toys = (int*) calloc(columns, sizeof(int));
    for (l_counter = 0; l_counter < columns; l_counter++)
        scanf("%d", &toys[l_counter]);

    ASC_sort(toys, columns);

    for (l_counter = 0; l_counter < columns; l_counter++)
        printf("%d ", toys[l_counter]);
}