/**
 * @file Evaluate_Reverse_Polish_Notation.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 150 on Leetcode.
 *          Postfix -> Infix Using Stack data structure. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE        10000

#define PUSH(_X)        (stack[++sp] = _X)
#define POP()           (stack[sp--])

bool isOperator(const char* c)
{
    return ((*c == '+') || ((*c == '-') && ((*(c+1)<'0') || (*(c+1)>'9'))) || (*c == '*') || (*c == '/'));
}

int evalRPN(char** tokens, int tokensSize) 
{
    int stack[MAX_SIZE];
    int sp = -1;
    int result = 0, op1 = 0, op2 = 0;

    for(int i = 0; i < tokensSize; ++i)
    {
        if(isOperator(&tokens[i][0]))
        {
            op1 = POP();
            op2 = POP();
            switch(tokens[i][0])
            {
                case '+': result = op2 + op1;
                    break;
                case '-': result = op2 - op1;
                    break;
                case '*': result = op2 * op1;
                    break;
                case '/': result = op2 / op1;
                    break;
                default: /* Nothing */
                    break;
            }
            PUSH(result);
        }   
        else
            { PUSH(atoi(tokens[i])); }
    }
   return POP();
}

int main()
{
    char *tokens[] = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};

    printf("Result: %d\n", evalRPN(tokens, 13));
    
    return 0;
}