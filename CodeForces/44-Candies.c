/**
 * Candies
 * Jan 01st 2023
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int test_cases, l_counter;
    scanf("%d", &test_cases);

    int *ans = (int *) calloc(test_cases, sizeof(int));
    int counter = 0;
    
    while (test_cases--)
    {   
        int number_of_candies;
        scanf("%d", &number_of_candies);
        
        int final = log(number_of_candies + 1) / log(2);
        double x;        
        for (l_counter = 2; l_counter <= final + 1; l_counter++)
        {
            x = (number_of_candies * 1.0) / (pow(2, l_counter) - 1);  
            
            if(floor(x) == x && x > 0)
                break;   
        }
        
        ans[counter++] = (int)x;
    }

    for(l_counter = 0; l_counter < counter; ++l_counter)
        printf("%d\n", ans[l_counter]);
    
    free(ans);
}