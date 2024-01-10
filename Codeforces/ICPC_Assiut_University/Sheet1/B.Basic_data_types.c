/*
 *  Basic Datatypes
 *  December 28th 2023  
 *  @author : Mostafa Asaad  
*/
#include <stdio.h>

int main(void) {
    /* int, long long, char, float, double */
    int integer_number; long long long_number; char character;
    float float_number; double double_number;
    scanf("%d %lld %c %f %lf", &integer_number, &long_number, &character, 
                               &float_number, &double_number);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n", integer_number, long_number, character, 
                                    float_number, double_number);
}