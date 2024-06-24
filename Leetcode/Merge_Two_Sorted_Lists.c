/**
 * @file    Merge_Two_Sorted_Lists.c
 * @author  Mostafa Asaad (https://github.com/M0stafa077)
 * @brief   Problem number 21 on Leetcode. 
*/
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    if(!list1 && !list2) return NULL;
    if(list1 && !list2) return list1;
    if(!list1 && list2) return list2;

    struct ListNode *answerNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    answerNode->val = 0, answerNode->next = NULL;
    struct ListNode *iteratorNode = answerNode;

    while (list1 && list2)
    {
        /* If the value in the first list is less than that in the second list */
        if(list1->val < list2->val)
        {
            /* Create a new node with the value of the smaller one */
            struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
            newNode->val = list1->val;
            newNode->next = NULL;
            /* Store the value in the answer list */
            iteratorNode->next = newNode;
            iteratorNode = iteratorNode->next;
            /* Move list1 one node forward */
            list1 = list1->next;
        }
        /* If the value in the second list is less than that in the first list */
        else if(list1->val > list2->val)
        {
            /* Create a new node with the value of the smaller one */
            struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
            newNode->val = list2->val;
            newNode->next = NULL;
            /* Store the value in the answer list */
            iteratorNode->next = newNode;
            iteratorNode = iteratorNode->next;
            /* Move list2 one node forward */
            list2 = list2->next;
        }
        /* If the value in the second list equals that in the first list */
        else if(list1->val == list2->val)
        {
            /* Create two nodes with the same value */
            struct ListNode *newNode1 = (struct ListNode *) malloc(sizeof(struct ListNode));
            struct ListNode *newNode2 = (struct ListNode *) malloc(sizeof(struct ListNode));
            newNode1->val = list1->val;
            newNode2->val = list2->val;
            /* Make one new node points to the other */
            newNode1->next = newNode2;
            newNode2->next = NULL;
            /* Store the two nodes in the answer list */
            iteratorNode->next = newNode1;
            iteratorNode = iteratorNode->next;
            iteratorNode->next = newNode2;
            iteratorNode = iteratorNode->next;            
            /* Move both the lists one node forward */
            list1 = list1->next;
            list2 = list2->next;
        }
    }
    /* In case of one list is bigger than the other */
    if(list1) iteratorNode->next = list1; 
    if(list2) iteratorNode->next = list2;
    /* Return the answer */
    return answerNode->next;

}