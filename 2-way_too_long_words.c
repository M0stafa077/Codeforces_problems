/*                                 -> Way Too Long Words <--
    Sometimes some words like "localization" or "internationalization" are so 
long that writing them many 
times in one text is quite tiresome.

    Let's consider a word too long, if its length is strictly more than 10 
characters. All too long words 
should be replaced with a special abbreviation.

    This abbreviation is made like this: we write down the first and the last 
letter of a word and between them we write the number of letters between the 
first and the last letters. That number is in decimal system and doesn't 
contain any leading zeroes.

    Thus, "localization" will be spelt as "l10n", and "internationalization» 
will be spelt as "i18n".

    You are suggested to automatize the process of changing the words with 
abbreviations. At that all too long words should be replaced by the 
abbreviation and the words that are not too long should not undergo any changes.

    Input
        The first line contains an integer n (1 ≤ n ≤ 100). 
Each of the following n lines contains one word. 
    All the words consist of lowercase Latin letters and possess the lengths 
of from 1 to 100 characters.

    Output
        Print n lines. The i-th line should contain the result of replacing 
of the i-th word from the input data.

    Example :
        Input :
            4
            word
            localization
            internationalization
            pneumonoultramicroscopicsilicovolcanoconiosis
        Output :
            word
            l10n
            i18n
            p43s
*/

/* @auther Mostafa_Asaad */
#include <stdio.h>
#include <string.h>

int get_inbetween(char* str) {
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    return length - 2;
}

char get_last(char* str){
    size_t length = strlen(str);
    while (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    return str[length - 1];
}   
int main(){
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 100)
        {
        char str[n][101];
        for (int i = 0; i < n; i++)
        {
            scanf("%101s", str[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(get_inbetween(str[i]) < 9)
            {
                printf("%s\n", str[i]);
            }
            else
            {
                //printf("%c%d%c\n", str[i][0], get_inbetween(str[i]), get_last(str[i]));
                printf("%c%ld%c\n", str[i][0], strlen(str[i]) - 2, str[i][strlen(str[i]) - 1]);

            }  
        }
    }
    printf("\n\n");
}