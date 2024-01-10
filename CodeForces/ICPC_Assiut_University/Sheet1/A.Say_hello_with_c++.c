/*
 *  Say Hello With C++
 *  December 28th 2023  
 *  @author : Mostafa Asaad  
*/
#include <stdio.h>
#include <malloc.h>

int main(void){
    char *name = (char *) malloc(100 * sizeof(char));
    scanf("%s", name);
    printf("Hello, %s", name);
}