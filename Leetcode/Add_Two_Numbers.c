/**
 * @file    Add_Two_Number.c
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem number 2 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *answerNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    answerNode->val = 0;
    answerNode->next = NULL;

    struct ListNode *iteratorNode = answerNode;

    int carry = 0;

    while(l1 || l2 || carry)
    {
        /* get the current two digits */
        int v1 = 0, v2 = 0;
        if(l1) v1 = l1->val;
        if(l2) v2 = l2->val;

        /* Calculate the sum of the two current nodes */
        int sum = v1 + v2 + carry;
        /* Calculate the new carry */
        carry = sum / 10;
        sum %= 10;

        /* Store the answer */
        struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        newNode->val = sum;
        newNode->next = NULL;
        
        iteratorNode->next = newNode;
        
        iteratorNode = iteratorNode->next;
        if(l1) l1 = l1->next; else l1 = NULL;
        if(l2) l2 = l2->next; else l2 = NULL;
    }
    return answerNode->next;
}
