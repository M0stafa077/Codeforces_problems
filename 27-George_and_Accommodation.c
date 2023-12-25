/**
 * George and Accommodation 
 * December 21th 2023 
 * @author : Mostafa Asaaad
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Get number of rooms */
    int number_of_rooms;
    scanf("%d", &number_of_rooms);
    /* Check */
    int peaple_in_room, room_capacity;  
    int sum = 0;

    for (int i = 0; i < number_of_rooms; i++)
    {
        scanf("%d %d", &peaple_in_room, &room_capacity);
        if (peaple_in_room <= room_capacity - 2){
            ++sum;
            continue;
        }
    }
    /* Print */
    printf("%d", sum);
}