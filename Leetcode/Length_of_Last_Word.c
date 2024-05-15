/**
 * @file Find_the_Index_of_the_First_Occurrence_in_a_String.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 58 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int lengthOfLastWord(char* s) 
{
    int i = strlen(s) - 1;
    int counter = 0;

    if(i == 0 && s[i] != ' ')
        return 1;

    while (s[i] == ' ')
        { --i; }

    while (s[i--] != ' ')
    {
        ++counter; 
        if(i < 0)
            break;
    }
    
    return counter;    
}

int main()
{
    char *s = " a";

    printf("Result %d\n", lengthOfLastWord(s));

    return 0;
}
