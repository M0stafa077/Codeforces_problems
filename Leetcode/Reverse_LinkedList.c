/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode* prev_ptr = NULL;
    struct ListNode* next_ptr = NULL;    
    while(head != NULL)
    {
        next_ptr = head -> next;
        head -> next = prev_ptr;
        prev_ptr = head;
        head = next_ptr;
    }
    return prev_ptr;
}