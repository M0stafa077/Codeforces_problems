/**
             Word Capitalization
Capitalization is writing a word with its first letter as a capital letter.
Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains
unchanged.

Input
    A single line contains a non-empty word. This word consists of lowercase
and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
    Input:  ApPLe
    Output: ApPLe

    Input: konjac
    Output:Konjac
*/


/* @auther Mostafa_Asaad */
#include <stdio.h>
#include <string.h>

int main(void) {

    char input[1000];
    scanf("%s", input);

    if (((int)input[0] >= 97) && ((int)input[0] <= 123))
        input[0] -= 32;
    else
        { /* Nothing */ }

    printf("%s\n", input);
}
