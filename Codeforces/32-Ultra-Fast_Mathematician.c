/**
 * Ultra-Fast Mathematician
 * December 25th 2023
 * @author : Mostafa_Asaad
*/
#include <stdio.h>
#include <stdlib.h>
typedef unsigned char uint8_t;

int main(void) {
    uint8_t num_size = 101;
    char *num1 = (char *) calloc(num_size, sizeof(char));    
    scanf("%s", num1);

    char *num2 = (char *) calloc(101, sizeof(char)); 
    scanf("%s", num2);

    for (int i = 0; i < strlen(num1); i++)
    {
        if (num1[i] == num2[i]){
            printf("0");
        }else
            printf("1");
    }
    free(num1);
    free(num2);
}