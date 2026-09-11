/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    // int count;
    //   struct ListNode * temp=head;
    //  while(temp!=NULL){
    //     temp=temp->next;
    //     count++;
    //  }
    // int middle = count/2;
    //    temp=head;
    //    int i =0;
    //  while(i!=middle && temp!=NULL){
    //     temp=temp->next;
    //     i++;
    //  }
    //  return temp;
    struct ListNode * fast=head;
    struct ListNode * slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}