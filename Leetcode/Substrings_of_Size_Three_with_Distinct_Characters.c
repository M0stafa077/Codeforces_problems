/**
 * @file Substrings_of_Size_Three_with_Distinct_Characters.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 1876 on Leetcode. 
 *              => Sliding Window <=
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countGoodSubstrings(char* s) 
{
    int ptr = 2, res = 0;
    int size = strlen(s);
    if(size < 3)
        { return 0; }

    if(size == 3)
        return (s[0] != s[1] && s[0] != s[2] && s[1] != s[2]);

    while (ptr < size)
    {
        if(s[ptr] != s[ptr - 1] && s[ptr] != s[ptr - 2] && s[ptr - 1] != s[ptr - 2])
            { ++res; }
        
        ++ptr;
    }
    return res;
}

int main()
{
    char *s = "xyzzaz";

    int res = countGoodSubstrings(s);

    printf("Result: %d\n", res);
    
    return 0;
}