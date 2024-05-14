/**
 * @file Find_the_Index_of_the_First_Occurrence_in_a_String.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 28 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool check(char *haystack, char *needle)
{
    int size = strlen(needle);
    for(int i = 0; i < size; ++i)
        if(haystack[i] != needle[i])
            return false;
    return true;
}

int strStr(char* haystack, char* needle) 
{
    int haystack_size = strlen(haystack);
    int needle_size = strlen(needle);
    for(int i = 0; i < haystack_size; ++i)
        if(haystack[i] == needle[0])
            if(check(haystack + i, needle))
                return i;
    return -1;
}

int main()
{
    char *haystack = "sadbutsad", *needle = "sad";

    printf("Result: %d\n", strStr(haystack, needle));

    return 0;
}