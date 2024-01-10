/*
                        --> Petya and Strings <--

    Little Petya loves presents. His mum bought him two strings of the same size
for his birthday. The strings consist of uppercase and lowercase Latin 
letters. Now Petya wants to compare those two strings lexicographically. 
The letters' case does not matter, that is an uppercase letter is considered
equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

    Input
    Each of the first two lines contains a bought string. 
The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings
are of the same length and also consist of uppercase and lowercase Latin letters.

    Output:
    If the first string is less than the second one, print "-1". 
If the second string is less than the first one, print "1". If the strings are equal, 
print "0". Note that the letters' case is not taken into consideration when the 
strings are compared.

Examples
    Input:
        aaaa
        aaaA
    Output:
        0 

    Input:
        abs
        Abz
    Output:
        -1

    Input:
        abcdefg
        AbCdEfF
    Output:
        1

        aslkjlkasdd
        asdlkjdajwi

*/

/* @auther Mostafa_Asaad */
#include <stdio.h>
#include <string.h>

void lowerCase(char *str);
int my_strcmp(const char *str1, const char *str2);

int main(void){
    char str1[101], str2[101];
    scanf("%100s", str1);
    scanf("%100s", str2);
    lowerCase(str1);
    lowerCase(str2);
    
    int result = 0;
    result = my_strcmp(str1, str2);     /* strcmp() can be used */

    if (result > 0)
        /* str1 > str2 */
        printf("%d", 1);
    else if (result < 0)
        /* str1 < str2 */
        printf("%d", -1);
    else if (0 == result)
        /* str1 = str2 */
        printf("%d", 0);
}

void lowerCase(char *str){
    for (int i = 0 ;i < strlen(str);i++)
        if (str[i] <= 90)
            str[i] += 32;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) 
            return (*str1 - *str2);

        str1++;
        str2++;
    }

    return (*str1 - *str2);
}
