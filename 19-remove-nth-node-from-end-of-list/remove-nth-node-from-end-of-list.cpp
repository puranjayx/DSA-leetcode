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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL) {
            head=NULL;
            return head;
        }
        ListNode * temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode*gg=head;
            head=head->next;
            delete gg;
            return head;
        }
        int pos = cnt-n;
        int i =0;
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        ListNode * te = temp->next; 
        temp->next=te->next;
        delete te;
        return head;
    }
};