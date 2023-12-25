/*
                Word
Vasya is very upset that many people on the Net mix uppercase and lowercase 
letters in one word. That's why he decided to invent an extension for his 
favorite browser that would change the letters' register in every word so 
that it either only consisted of lowercase letters or, vice versa, only of 
uppercase ones. At that as little as possible letters should be changed in 
the word. For example, the word HoUse must be replaced with house, and the 
word ViP — with VIP. If a word contains an equal number of uppercase and 
lowercase letters, you should replace all the letters with lowercase ones. 
For example, maTRIx should be replaced by matrix. Your task is to use the 
given method on one given word.

Input:
    The first line contains a word s — it consists of uppercase and lowercase 
Latin letters and possesses the length from 1 to 100.

Output:
    Print the corrected word s. If the given word s has strictly more uppercase 
letters, make the word written in the uppercase register, otherwise - in the 
lowercase one.

Examples:
    Input:
        HoUse 
    Output:
        house
*/

/* @author Mostafa_Asaad */
#include <stdio.h>
#include <string.h>

int is_upper(char c);
int is_lower(char c);

int main(void){

    char input[100];
    scanf("%s", input);
    int lower = 0, upper = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (is_upper(input[i]))
            ++upper;
        else if(is_lower(input[i]))
            ++lower;
    }
    if (lower >= upper){
        for (int i = 0; i < strlen(input); i++)
        {
            if (is_upper(input[i]))
                input[i] += 32;    
        }
        printf("%s", input);
    } else {
        for (int i = 0; i < strlen(input); i++)
        {
            if (is_lower(input[i]))
                input[i] -= 32;    
        }
        printf("%s", input);
    }

}

int is_upper(char c){
    if (c >= 65 && c <= 96)
        return 1;
    else    
        return 0;    
}
int is_lower(char c){
    if (c >= 97 && c <= 128)
        return 1;
    else    
        return 0;  
}