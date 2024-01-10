/**
 * HQ9+
 * Dec 30th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void) {
    char *instruction = (char *) malloc(101 * sizeof(char));
    scanf("%s", instruction);
    unsigned char flag = 0, l_counter;

    for (l_counter = 0; l_counter < strlen(instruction); l_counter++)
        if ('H' == instruction[l_counter] || 'Q' == instruction[l_counter] 
                                          || '9' == instruction[l_counter]){
            printf("YES");
            flag = 1;
            break;
        }
        
    if(!flag)
        printf("NO");
}