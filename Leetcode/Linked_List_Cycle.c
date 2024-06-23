/**
 * @file Linked_List_Cycle.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 141 on Leetcode. 
*/
#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

#define VISITED     100001  /* 10^5 + 1*/

bool hasCycle(struct ListNode *head) 
{
    if(!head)
        { return false; }
    
    while (head->next)
    {
        if(head->val == VISITED) 
            { return true; }
        /* 
         *  It's NOT a good practise to damage the data, but who cares ?
         *  Yet we can use a hashSet with O(n) extra memory 
         */
        head->val = VISITED;
        head = head->next;
    }
    return false;
}