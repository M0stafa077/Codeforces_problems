/**
 * @file Gas_Station.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 134 on Leetcode. 
*/
#include <stdio.h>

int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) 
{
    int total_gas = 0, total_cost = 0;
    int start_idx = 0, current_gas = 0;
    int i = 0, j = 0;
    for(i = 0; i < gasSize; ++i)
    {
        total_gas  += gas[i];
        total_cost += cost[i];
    }
    if((total_cost > total_gas) || (total_gas == 0))
        return -1;

    /*
    for(i = 0; i < gasSize; ++i)
    {
        if(cost[i] > gas[i])
            continue        
        
        start_idx = i;
        j = i;
        current_gas = 0;
        while (current_gas >= 0)
        {
            current_gas += gas[j];
            current_gas -= cost[j];
            ++j;
            if(j == gasSize)
                j = 0;
            if(j == start_idx)
                return start_idx;
        }   
    }
    */
    for (i = 0; i < gasSize; ++i) 
    {
        current_gas += gas[i] - cost[i];
        if (current_gas < 0) 
        {
            current_gas = 0;
            start_idx = i + 1;
        }
    }
    return start_idx;
}

int main()
{
    int gas[]  = {5,1,2,3,4};
    int cost[] = {4,4,1,5,1};
    printf("Result: %d\n", canCompleteCircuit(gas, 5, cost, 5));
    
    return 0;
}
