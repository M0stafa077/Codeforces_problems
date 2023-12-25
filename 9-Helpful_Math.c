/*
                 --> Helpful Maths <--
    Xenia the beginner mathematician is a third year student at elementary 
school. She is now learning the addition operation.

    The teacher has written down the sum of multiple numbers. Pupils should 
calculate the sum. To make the calculation easier, the sum only contains 
numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count,
so she can calculate a sum only if the summands follow in non-decreasing order. 
For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and 
print the sum in such a way that Xenia can calculate the sum.

Input:
    The first line contains a non-empty string s — the sum Xenia needs
to count. String s contains no spaces. It only contains digits and 
characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. 
String s is at most 100 characters long.

Output:
    Print the new sum that Xenia can count.
Examples:
    Input:
        3+2+1
    Output:
        1+2+3   
    Input:
        1+1+3+1+3
    Output:
        1+1+1+3+3
    Input:
        2
    Output:
        2
*/

/* @auther Mostafa_Asaad */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int* arr, int size);

int main(void){
    char* arr = (char *) malloc(100 * sizeof(char));
    scanf("%s", arr);
    
    int numbers[100]; 
    int size = 0;

    char *tok = strtok(arr, "+"); /* Search about strtok() function */
    while (tok != NULL) {
        numbers[size++] = atoi(tok);
        tok = strtok(NULL, "+");
    }

    sort(numbers, size);

    for (int i = 0; i < size - 1; i++)
    {
        printf("%d+", numbers[i]);   
    }
    printf("%d", numbers[size - 1]);
}

// .Insertion sort algorithm:
void sort(int* arr, int size){
        int key;
    for (int i = 1; i < size; ++i)
    {
        key = arr[i];
        int j = i - 1;

        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
} 
    