/**
 * @file Candy.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 135 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>

int candy(int* ratings, int ratingsSize) 
{
    if (ratingsSize <= 1)
        return ratingsSize;

    int *candies = NULL;
    candies = (int *) malloc(ratingsSize* sizeof(int));
    candies[0] = 1;

    
    for (int i = 1; i < ratingsSize; ++i) {
        candies[i] = (ratings[i] > ratings[i - 1]) ? (candies[i - 1] + 1) : 1;
    }

    int totalCandies = candies[ratingsSize - 1];

    
    for (int i = ratingsSize - 2; i >= 0; --i) 
    {
        candies[i] = (ratings[i] > ratings[i + 1]) ? (candies[i] > candies[i + 1] + 1 ? candies[i] : candies[i + 1] + 1) : candies[i];
        totalCandies += candies[i]; 
    }

    return totalCandies;
}
int main()
{
    int ratings[] = {1,3,2,2,1};
    printf("Result: %d\n", candy(ratings, 5));

    return 0;
}