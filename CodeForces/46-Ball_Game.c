/**
 * Ball and Game
 * Jan 4th 2024
 * @author: Mostafa Asaad
*/
#include <stdio.h>

int main() 
{
    int numbe_of_children, l_counter, res = 0;
    scanf("%d", &numbe_of_children);
    
    for(l_counter = 1; l_counter < numbe_of_children; ++l_counter)
    {
        res += l_counter;
        if(res >= numbe_of_children)
            res -= numbe_of_children;

        printf("%d ", res + 1);    
    }
}