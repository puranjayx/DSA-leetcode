/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode * temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    int position = count - n +1;
    int i =1;
    temp = head;
    while(i!=position-1 &&  temp->next!=NULL){
        temp=temp->next;
        i++;
    }   
    if(position == 1){
    struct ListNode *del = head;
    head =head->next;
    return head;
}
    struct ListNode * nextnode;
    nextnode=temp->next;
    temp->next=nextnode->next;

    return head;
}