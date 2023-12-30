/**
 * Kefa and First Steps
 * Dec 30th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int LSS(int *array, int size);

int main(void){
    int number_of_days, l_counter;
    scanf("%d", &number_of_days);

    int *money = (int *) calloc(number_of_days, sizeof(int));
    for(l_counter = 0; l_counter < number_of_days; ++l_counter)
        scanf("%d" ,&money[l_counter]);

    printf("%d", LSS(money, number_of_days));
    free(money);
}

int LSS(int *array, int size){
    int current_sub_segment = 1, max_sub_segment = 1, l_counter;

    for(l_counter = 0; l_counter < size - 1; ++l_counter){
        if(array[l_counter] <= array[l_counter + 1])
            current_sub_segment++;
        else 
            current_sub_segment = 1;

        if(current_sub_segment > max_sub_segment)
            max_sub_segment = current_sub_segment;
    }

    return max_sub_segment;        
}