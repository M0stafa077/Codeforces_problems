/*
Translation

The translation from the Berland language into the Birland language is not an 
easy task. Those languages are very similar: a berlandish word differs from a 
birlandish word with the same meaning a little: it is spelled (and pronounced) 
reversely. For example, a Berlandish word code corresponds to a Birlandish word 
edoc. However, it's easy to make a mistake during the «translation». Vasya 
translated word s from Berlandish into Birlandish as t. Help him: find out 
if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words 
consist of lowercase Latin letters. The input data do not consist unnecessary 
spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
    input
        code
        edoc
    output
        YES
    input
        abb
        aba
    output
        NO
    input
        code
        code
    output
        NO
*/

/* @author: Mostafa_Asaad */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *s = (char *) malloc(100 * sizeof(char));
    char *t = (char *) malloc(100 * sizeof(char));

    /* Scan The Strings */
    scanf("%s", s);
    scanf("%s", t);

    /* Compare the two string */
    int flag = 0, size = strlen(s);
    for (int i = 0; i < size; i++)
    {
        if (s[i] != t[size - i - 1]){
            flag = 1;
            break;
        } else{
            /* Nothing */
        }
    }

    /* Free the strings */
    free(s);
    free(t);

    /* Check the flag */
    if (flag)
        printf("NO");
    else
        printf("YES");
}