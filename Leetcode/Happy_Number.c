/**
 * @file Happy_Number.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 202 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isHappy(int n) 
{
    if((n == 1) || (n == 100) || (n == 1000) || (n == 10000))
        { return true; }  

    int sum = 0;
    int hashMap[1000] = { 0 };
    for(int i = 1; i < 1000; ++i)
        { hashMap[i] = 0; }
    
    while(sum != 1)
    {
        sum = 0;
        while(n != 0)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        if(hashMap[sum] == 0)
            { hashMap[sum] = 1; }
        else
            { return false; }
        
        n = sum;
    }
    return true;
}

int main()
{
    printf("Result: %s\n", isHappy(1999999999) ? "True" : "False");
    return 0;
}