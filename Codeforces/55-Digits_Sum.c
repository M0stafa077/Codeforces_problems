/**
 * Digits Sum (1553A) on Codeforces
 * 23ht of march 2024
 * @author : Mostafa Asaad 
*/
#define DONE    0
#if     !DONE    

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef unsigned char uint8_t;

void solve(void);

int main(void)
{
    uint8_t test_cases = 0;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        solve();
    }
}

void solve(void)
{
    unsigned long number = 0;
    scanf("%lu", &number);

    printf("%lu\n", (number + 1) / 10);
}

#endif