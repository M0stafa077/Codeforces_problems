/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode* temp_ptr = head;
    int listSize = 0;

    // Determine the List Size //
    while(temp_ptr != NULL)
    {
        temp_ptr = temp_ptr -> next;
        ++listSize;
    }

    temp_ptr = head;
    // Get the Middle Element // 
    for(int counter = 0; counter < listSize / 2; ++counter)
    {
        temp_ptr = temp_ptr -> next;
    }
    return temp_ptr;
}
