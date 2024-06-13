/**
 * @file Ransom_Note.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 383 on Leetcode. 
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) 
{
    if((strlen(ransomNote) == 1) && (strlen(magazine) == 1))
    {
        return ransomNote[0] == magazine[0];
    }

    int hashTable[26] = { 0 };
    
    int i = 0;
    while (ransomNote[i] != '\0')
        { ++hashTable[ransomNote[i++] - 'a']; }
   
    i = 0;
    while (magazine[i] != '\0')
        { --hashTable[magazine[i++] - 'a']; }     


    for(i = 0; i < 26; ++i)
    {
        if(hashTable[i] > 0)
            { return false; }   
    }

    return true;
}

int main()
{
    char ransomNote1[] = "a", magazine1[] = "b";
    char ransomNote2[] = "aa", magazine2[] = "ab";
    char ransomNote3[] = "aa", magazine3[] = "aab";
    
    printf("Result: \n");
    printf("1: %s\n", canConstruct(ransomNote1, magazine1) ? "True" : "False");
    printf("2: %s\n", canConstruct(ransomNote2, magazine2) ? "True" : "False");
    printf("3: %s\n", canConstruct(ransomNote3, magazine3) ? "True" : "False");

    return 0;
}