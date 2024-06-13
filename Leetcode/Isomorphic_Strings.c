/**
 * @file  Isomorphic_Strings.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 205 on Leetcode. 
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define AVAILABLE       -1
#define NOT_MAPPED      false
#define MAPPED          true

bool isIsomorphic(char* s, char* t) 
{
    if (s == NULL || t == NULL) 
        { return false; }
    
    int size = strlen(s);
    
    int hashMap[255] = { AVAILABLE };
    for(int i = 1; i < 255; ++i)
        { hashMap[i] = AVAILABLE; }

    bool isCharMapped[255] = { NOT_MAPPED };
    for(int i = 1; i < 255; ++i)
        { isCharMapped[i] = NOT_MAPPED; }

    for(int i = 0; i < size; ++i)
    {
        if(hashMap[s[i]] == t[i])
            { continue; }

        if((hashMap[s[i]] == AVAILABLE) && (isCharMapped[t[i]] == NOT_MAPPED))
            { hashMap[s[i]] = t[i]; isCharMapped[t[i]] = MAPPED; }
        else
            { return false; }
    }
    return true;
}

int main()
{
    char s1[] = "egg", t1[] = "add";
    char s2[] = "foo", t2[] = "bar";
    char s3[] = "paper", t3[] = "title";
    char s4[] = "badc", t4[] = "baba";

    printf("Result: \n");
    printf("1: %s\n", isIsomorphic(s1, t1) ? "True" : "False");
    printf("2: %s\n", isIsomorphic(s2, t2) ? "True" : "False");
    printf("3: %s\n", isIsomorphic(s3, t3) ? "True" : "False");
    printf("3: %s\n", isIsomorphic(s4, t4) ? "True" : "False");

    return 0;
}