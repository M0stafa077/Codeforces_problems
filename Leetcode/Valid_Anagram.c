/**
 * @file Valid_Anagram.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 242 on Leetcode. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) 
{
    if(NULL == s || NULL == t)
        { return false; }

    int size = strlen(s);
    if(size != strlen(t))
        { return false; }

    if(size == 1)
        { return (*s == *t); }

    int hashMap[26] = { 0 };
    int i = 0;
    for(i = 1; i < 26; i++)
        { hashMap[i] = 0; }

    for(i = 0; i < size; ++i)
    {
        hashMap[s[i] - 'a']++;
        hashMap[t[i] - 'a']--;
    }

    for(i = 0; i < 26; ++i)
    {
        if(hashMap[i] != 0)
            { return false; }
    }
    return true;
}

int main()
{
    char s[] = "a";
    char t[] = "a";

    printf("Result: ");
    printf("%s\n", isAnagram(s, t) ? "True" : "False");
    return 0;
}