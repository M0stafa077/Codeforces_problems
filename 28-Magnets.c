/**
 * Magnets
 * December 21th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_magnets, number_of_groups = 0;
    scanf("%d", &number_of_magnets);
    
    int *magnets = (int *) calloc(number_of_magnets, sizeof(int));

    for(int i = 0; i < number_of_magnets; i++)
        scanf("%d", &magnets[i]);

    for(int i = 0; i < number_of_magnets; i++)
        if(magnets[i] != magnets[i+1])
            ++number_of_groups;

    printf("%d", number_of_groups);
    return 0;
}