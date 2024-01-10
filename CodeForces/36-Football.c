/**
 * Football
 * December 28th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8_t;

int main(void) {
    char *players = (char *) malloc(101 * sizeof(char));
    scanf("%s", players);
    uint8_t zeros = 1, ones = 1, l_counter = 0;
    for (l_counter = 0; l_counter < strlen(players) - 1; l_counter++)
    {
        if ('0' == players[l_counter] && '0' == players[l_counter + 1])
            zeros++;
        else    
            zeros = 1;    
        if ('1' == players[l_counter] && '1' == players[l_counter + 1])
            ones++;
        else    
            ones = 1; 

        if (7 == zeros){
            printf("YES");
            break;
        } else if (7 == ones){
            printf("YES");
            break;
        }    
    }
    if (ones < 7 && zeros < 7)
        printf("NO");
}