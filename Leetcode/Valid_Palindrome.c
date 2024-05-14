/**
 * @file Merge_Sorted_Array.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 125 on Leetcode.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char process(const char c)
{
    if(c >= 'A' && c <= 'Z')
        { return c + ('a' - 'A'); }
    
    else if (c >= 'a' && c <= 'z')
        { return c; }
    
    else if (c >= '0' && c <= '9')
        { return c; }
    
    else
        { return -1; }
}

bool isPalindrome(char* s) 
{
    int l = 0, r = (strlen(s) - 1);
    char x = 0, y = 0;

    if(strlen(s) <= 1)
        return true;

    if(strlen(s) == 2)
    {
        x = process(s[0]);
        y = process(s[1]);
        
        if(-1 == x || -1 == y)
            return true;
        return (x == y);
    }

    while(l < r)
    {
        x = process(s[l]);
        y = process(s[r]);

        if(x == -1 && y == -1)
        {
            ++l, --r;
            continue;
        }

        if(x == -1)
        {
            ++l;
            continue;
        }

        if(y == -1)
        {
            --r;
            continue;
        }

        if(x == y)
        {
            ++l, --r;
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char *s = "0P";

    isPalindrome(s) ? printf("True\n") : printf("False\n");
    
    return 0;
}