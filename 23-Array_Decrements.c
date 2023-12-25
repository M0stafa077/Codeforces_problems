/**
 * @author: Mostafa_Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int test_cases, not_equal_flag = 0;
    scanf("%d", &test_cases);
    int *yes_or_no = (int *) calloc(test_cases, sizeof(int));
    int current_case = 0;
    
    while (test_cases-- > 0)
    {
        // First line : (n) Number of elements
        int number_of_elements;
        scanf("%d", &number_of_elements);
        
        // Secend line : (a[]) First array
        int* a = (int *) calloc(number_of_elements, sizeof(int));
        for (int counter = 0; counter < number_of_elements; counter++)
        {
            scanf("%d", &a[counter]);
        }

        // Third line : (b[]) Second array
        int* b = (int *) calloc(number_of_elements, sizeof(int));
        for (int counter = 0; counter < number_of_elements; counter++)
        {
            scanf("%d", &b[counter]);
        }

        int number_of_decrements = a[0] - b[0];

        for (int i = 0; i < number_of_elements; i++)
        {
            for (int j = 0; j < number_of_decrements; j++)
            {
                if (a[i] == 0 || a[i] == b[i]){
                    break;
                }
                else {
                    --a[i];
                }
            }    
        }
        
        for (int i = 0; i < number_of_elements; i++)
        {
            if (a[i] != b[i])
            {
                not_equal_flag = 1;
                break;
            }else {
                not_equal_flag = 0;
                continue;
            }  
        }
        yes_or_no[current_case++] = not_equal_flag; 
    }

    for (int i = 0; i < current_case; i++)
    {
        if (yes_or_no[i] == 1){
            printf("NO\n");
        }
        else if(yes_or_no[i] == 0) {
            printf("YES\n");
        }
    }

}