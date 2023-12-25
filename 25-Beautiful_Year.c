/**
 * Beautiful Year
 * @author : Mostafa Asaad
 * December 21th 2023 
*/
#include <stdio.h>

int is_beautiful(int year_to_check){
    int thousands, hundreds, tens, ones;

    ones = year_to_check % 10;
    year_to_check /= 10;

    tens = year_to_check % 10;
    year_to_check /= 10;

    hundreds = year_to_check % 10;
    year_to_check /= 10;

    thousands = year_to_check % 10;
    
    if((thousands != hundreds) && (thousands != tens) && (thousands != ones)
    && (hundreds != tens) && (hundreds != ones)
    && (tens != ones)){
        return 1;
    } else
        return 0;

}

int main(void){
    int year;
    scanf("%d", &year);
    int flag = is_beautiful(++year);
    while (flag != 1)
    {
        flag = is_beautiful(++year);
    }   
    printf("%d", year);
}