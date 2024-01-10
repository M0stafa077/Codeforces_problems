/**
 *  Queue at the School
 *  @author : Mostafa_Asaad
 *  December 17th 2023
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int number_of_children, time;
    scanf("%d%d", &number_of_children, &time);
    char *children = (char *) malloc(number_of_children);
    scanf("%s", children);

    while (time > 0)
    {
        for (int i = 0; i < number_of_children; i++)
        {
            if (('B' == children[i]) && ('G' == children[i + 1]))
            {
                char temp = children[i];
                children[i] = children[i + 1];
                children[i + 1] = temp;
                ++i;
            }
        }
        time--;
    }
    printf("%s", children);

}