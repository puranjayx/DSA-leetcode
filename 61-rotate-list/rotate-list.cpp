/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * slow = head;
        ListNode *fast=head;
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode * help=head;
        int count=0;
        while(help!=NULL){
            count++;
            help=help->next;
        }
        k=k%count;
        if(k==0) return head;
        for(int i =0;i<k;i++){
            fast=fast->next;
        }
        // if(fast==NULL){
        //     ListNode * curr=head;
        //     ListNode * nextnode=head;
        //     ListNode * prev=NULL;
        //     while(nextnode!=NULL){
        //         nextnode=curr->next;
        //         curr->next=prev;
        //         prev=curr;
        //         curr=nextnode;
        //     }
        //     return prev;
        // }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode * temp=slow->next;
        slow->next=NULL;
        fast->next=head;
        //  head=slow->next;

        return temp;

    }
};