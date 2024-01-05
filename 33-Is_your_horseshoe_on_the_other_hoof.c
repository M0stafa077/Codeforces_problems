/**
 * Ultra-Fast Mathematician
 * December 25th 2023
 * @author : Mostafa_Asaad
*/
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_COLORS    4

typedef unsigned char uint8_t;

int main(void) {
    int color[4];
    uint8_t l_counter = 0, sum = 0, equal_flag = 0, i = 0;
    for(l_counter = 0; l_counter < NUMBER_OF_COLORS; ++l_counter)
    {
        scanf("%d", &color[l_counter]);
    } 

    for (l_counter = 0; l_counter < NUMBER_OF_COLORS; l_counter++)
    {
        for (i = l_counter + 1; i < NUMBER_OF_COLORS; i++)
        {
            if(color[l_counter] == color[i]){
                ++sum; 
                break;
            }    
        }
        
    }
    printf("%d", sum);
    
}