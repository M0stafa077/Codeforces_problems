/**
 * Gravity Flip
 * Dec 30th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size){
    int key, i;
    for (int l_counter = 1; l_counter < size; ++l_counter){
        key = array[l_counter];
        i = l_counter - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }
}

int main(void) {
    int columns, l_counter;
    scanf("%d", &columns);
    
    int *toys = (int*) calloc(columns, sizeof(int));
    for (l_counter = 0; l_counter < columns; l_counter++)
        scanf("%d", &toys[l_counter]);

    sort(toys, columns);

    for (l_counter = 0; l_counter < columns; l_counter++)
        printf("%d ", toys[l_counter]);
}