/**
 * @file String_to_Integer.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 8 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


int myAtoi(char* s) 
{
    while(*s == ' ')
        s++;

    int length = strlen(s);
    if(((length == 0) || (*s < '0') || (*s > '9')) && ((*s != '-') && (*s != '+')))
        return 0;

    int number = 0;
    unsigned char isNegative = 0;
    if(*s == '-')
        { isNegative = 1; ++s; }
    else if(*s == '+')
        { ++s; }

    while (*s != '\0' && (*s >= '0') && (*s <= '9'))
    {
        /* to avoid integer overflow */
        if(number > (INT_MAX / 10) || (number == (INT_MAX / 10) && (*s - '0') > 7))
            { return isNegative ? INT_MIN : INT_MAX; }
        
        number = number * 10 + (*s - '0');
        s++;
    }
    
    return isNegative ? (number * -1) : number;
}

int main()
{
    char s[] = "                        1c";
    printf("Result = %d\n", myAtoi(s));

    return 0;
}