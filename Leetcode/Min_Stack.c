/**
 * @file Min_Stack.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 155 on Leetcode. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE        2048

typedef struct stack
{
    int data[MAX_SIZE];
    int sp;
    struct stack *minimumNumber_stack;
} MinStack;

int minStackTop(MinStack* stack);

MinStack* minStackCreate() 
{
    /* Initialize a stack object */
    MinStack *stack = NULL;
    stack = (MinStack *) malloc(sizeof(MinStack));

    /* Initialize the data array with zeros */
    memset(stack->data, 0, MAX_SIZE);

    /* Initialize the stack pointer to -1 */
    stack->sp = -1;

    /* Initialize a stack to keep track of the minimum number */
    stack->minimumNumber_stack = (MinStack *) malloc(sizeof(MinStack));

    /* Initialize the data array with zeros */
    memset((stack->minimumNumber_stack)->data, 0, MAX_SIZE);

    /* Initialize the stack pointer to -1 */
    (stack->minimumNumber_stack)->sp = -1;

    /* Return the initialized stack */
    return stack;
}

void minStackPush(MinStack* stack, int val) 
{
    /* Push the value to the stack */
    stack->data[++(stack->sp)] = val;

    /* Compare the value to the minimum value in the stack*/
    if((stack->minimumNumber_stack)->sp == -1)
    {
        /* the stack is empty. push the new value */
        (stack->minimumNumber_stack)->data[++((stack->minimumNumber_stack)->sp)] = val;
    }
    else
    {
        /* The stack is not empty */
        /* If the new value is less than the last min value, push it */
        if(minStackTop(stack->minimumNumber_stack) >= val)
        { (stack->minimumNumber_stack)->data[++((stack->minimumNumber_stack)->sp)] = val; }
        else
            { /* Nothing */ }
    }
}

void minStackPop(MinStack* stack) 
{
    /* Check if stack is empty first */
    if((stack == NULL) || (stack->sp == -1))
        { return; }

    /* Check if the value to be popped is the minimum number */
    if(minStackTop(stack) == minStackTop(stack->minimumNumber_stack))
    {
        /* Pop from the minimumNumber_stack */
        (stack->minimumNumber_stack->sp)--;
        (stack->sp)--;
    }   
    else
        { (stack->sp)--; }
}

int minStackTop(MinStack* stack) 
{
    /* Check if stack is empty first */
    if((stack == NULL) || (stack->sp == -1))
        { return - 1; }

    return stack->data[(stack->sp)];
}

int minStackGetMin(MinStack* stack) 
{
    return minStackTop(stack->minimumNumber_stack);    
}

void minStackFree(MinStack* obj) 
{
    free(obj);
    obj = NULL;   
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
int main()
{
    MinStack* stack = minStackCreate();

    minStackPush(stack, 0);
    minStackPush(stack, 1);
    minStackPush(stack, 0);

    printf("current minimum = %d\n", minStackGetMin(stack));

    minStackPop(stack);

    printf("current minimum = %d\n", minStackGetMin(stack));

    return 0;
}