/**
* Puzzles
* Dec 31th 2023
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

int main(void) 
{
    int number_of_children, number_of_puzzles, l_counter, equal_flag = 0;;
    
    scanf("%d%d", &number_of_children, &number_of_puzzles);
    
    int *puzzles = (int *) calloc(number_of_puzzles, sizeof(int));
    for(l_counter = 0; l_counter < number_of_puzzles; ++l_counter)
        scanf("%d", &puzzles[l_counter]);
    
    ASC_sort(puzzles, number_of_puzzles);

    int minimum_difference = puzzles[number_of_children - 1] - puzzles[0];
    
    for (l_counter = 1; l_counter <= number_of_puzzles - number_of_children; l_counter++) 
    {
        int current_difference = puzzles[l_counter + number_of_children - 1] - puzzles[l_counter];
        
        if (current_difference < minimum_difference)
            minimum_difference = current_difference;
    }

    printf("%d", minimum_difference);    
}