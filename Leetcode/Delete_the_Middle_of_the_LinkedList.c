/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) 
{
    struct ListNode* temp_ptr = head;
    int listSize = 0;
    while(temp_ptr != NULL)
    {
        temp_ptr = temp_ptr -> next;
        ++listSize;
    }

    if(listSize == 1)
    {
        head = NULL;
        return head;
    }

    temp_ptr = head;
    for(int counter = 0; counter < listSize / 2 - 1; ++counter)
    {
        temp_ptr = temp_ptr -> next;
    }
    temp_ptr -> next = (temp_ptr -> next) -> next;
    return head;
}
