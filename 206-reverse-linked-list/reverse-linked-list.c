/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
        
    struct ListNode * prevnode=NULL;
    struct ListNode * current=head;
    struct ListNode * nextnode=head;

    while (nextnode!=NULL)
    {
        nextnode=nextnode->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;
    }
    head=prevnode;
    return head;
}