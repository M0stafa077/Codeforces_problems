/**
 * @file    Is_Subsequence.c
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem 392 on LeetCode
 * 
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSubsequence(char* s, char* t) 
{
    int tSize = strlen(t);
    int sSize= strlen(s);
    char current_character_idx = 0;

    int i = 0;
    while (i < tSize)
    { (t[i] == s[current_character_idx]) ? (current_character_idx++, i++) : (i++); }
    
    return (current_character_idx == sSize);
}

int main()
{
    char *s = "abc", *t = "ahbgdc";

    printf("Result: ");
    isSubsequence(s, t) ? printf("True\n") : printf("False\n");
    
    return 0;
}

