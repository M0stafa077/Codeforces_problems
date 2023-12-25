/**
 * Presents
 * December 22th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Receive the number of friends */
    int number_of_friends;
    scanf("%d", &number_of_friends);
    
    /* Receive the first array and decrement it */
    int *friend_Pi = (int *) calloc(number_of_friends, sizeof(int));
    for (int l_counter = 0; l_counter < number_of_friends; ++l_counter){
        scanf("%d", &friend_Pi[l_counter]);
        --friend_Pi[l_counter];
    }
    
    /* Fill the second array according to the problem requirements  */
    int *friend_i  = (int *) calloc(number_of_friends, sizeof(int));
    for (int l_counter = 0; l_counter < number_of_friends; ++l_counter)
        friend_i[friend_Pi[l_counter]] = l_counter;

    /* Print the result */
    for (int l_counter = 0; l_counter < number_of_friends - 1; ++l_counter)
        printf("%d ", ++friend_i[l_counter]);
    printf("%d", ++friend_i[number_of_friends - 1]); // To avoid the last space " " -_-

    /* Free the allocatd arrays */
    free(friend_Pi);
    free(friend_i);
}
