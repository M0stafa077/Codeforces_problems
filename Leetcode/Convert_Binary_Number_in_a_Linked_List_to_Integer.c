/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <math.h>

int getSize(struct ListNode* head);

int getDecimalValue(struct ListNode* head) 
{
    struct ListNode* temp_ptr = head;
    int listSize = getSize(head);
    int sum = 0;
    for(int counter = listSize; counter >= 0; --counter)
    {
        sum += (temp_ptr->val) * pow(2, counter);
        temp_ptr = temp_ptr -> next;
    }
    return sum;
}

int getSize(struct ListNode* head)
{
    int size = 0;
    struct ListNode *temp_ptr = head;
    while(temp_ptr->next != NULL)
    {
        ++size;
        temp_ptr = temp_ptr->next;
    }
    return size;
}
