/**
 * Calculating Function
 * December 23th 2023
 * @author : Mostafa_Asaad
*/
#include <stdio.h>

typedef unsigned long long uint64_t;

int main(void){
    uint64_t n, a;
    scanf("%lld", &n);
    
    if(n % 2 == 0) 
        a = n / 2;
    else 
        a = ((n + 1) / 2) * (-1);
    
    printf("%lld", a);;
}