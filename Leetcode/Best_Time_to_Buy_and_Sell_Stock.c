/**
 * @file Best_Time_to_Buy_and_Sell_Stock.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 121 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxProfit(int* prices, int pricesSize) 
{
    int l = 0, r = l + 1;
    int max_prpfit = 0;
    
    if (pricesSize <= 1) 
        return 0;
    
    else if(pricesSize == 2)
    {
        int max = 0;
        
        prices[1] > prices[0] ? ( max = (prices[1] - prices[0])) : (max = 0);

        return max;
    }
    
    while (r < pricesSize)
    {
        if(prices[l] < prices[r])
            { max_prpfit = fmax(max_prpfit, prices[r++] - prices[l]); }
        else
            { l = r++; } 
    }
    return max_prpfit;
}

int main(void)
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    int max = maxProfit(prices, size);
    printf("Max profit is %d\n", max);
}