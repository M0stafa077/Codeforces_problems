/**
 * Even Odds 
 * December 30th 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>

int main(void) {
    long long max_number, index;

    scanf("%lld %lld", &max_number, &index);

    long long half = (max_number % 2 == 0) ? (max_number / 2) : ((max_number / 2) + 1);

    if((index - 1) < half)  
        printf("%lld", (2 * index) - 1);
    else    
        printf("%lld", 2 * (index - half));    
}