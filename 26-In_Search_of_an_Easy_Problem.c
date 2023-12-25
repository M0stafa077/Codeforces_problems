/**
 * In Search of an Easy Problem
 * @author : Mostafa Asaad
 * December 21th 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number_of_people;
    scanf("%d", &number_of_people);
    int hard_flag = 0; 
    int *input_arr = (int *) malloc(number_of_people * sizeof(int));

    for (int i = 0; i < number_of_people; i++)
    {
        scanf("%d", &input_arr[i]);
        if (input_arr[i] == 1)
        {
            hard_flag = 1;
        }
    }
    if (hard_flag) 
        printf("HARD");
    else   
        printf("EASY");
    free(input_arr);
}