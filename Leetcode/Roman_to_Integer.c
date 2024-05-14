/**
 * @file Roman_to_Integer.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 13 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int romanToInt(char* s) 
{
    int sum = 0;
    for(int i = 0; i < strlen(s); ++i)
    {
        if('I' == s[i])
        {
            if('V' == s[i+1])
            {
                sum += 4;
                ++i;
                continue;
            }
            else if('X' == s[i+1])
            {
                sum += 9;
                ++i;
                continue;
            }
            else
            {
                sum += 1;
                continue;
            }
        }
        if('V' == s[i])
        {
            sum += 5;
            continue;            
        }
        if('X' == s[i])
        {
            if('L' == s[i+1])
            {
                sum += 40;
                ++i;
                continue;
            }
            else if('C' == s[i+1])
            {
                sum += 90;
                ++i;
                continue;
            }
            else
            {
                sum += 10;
                continue;
            }         
        }
        if('L' == s[i])
        {
            sum += 50;
            continue;   
        }
        if('C' == s[i])
        {
            if('D' == s[i+1])
            {
                sum += 400;
                ++i;
                continue;
            }
            else if('M' == s[i+1])
            {
                sum += 900;
                ++i;
                continue;
            }
            else
            {
                sum += 100;
                continue;
            }
        }
        if('D' == s[i])
        {
            sum += 500;
            continue;   
        }
        if('M' == s[i])
        {
            sum += 1000;
            continue;
        }
    }
    return sum;
}