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

ListNode * reverse(ListNode * slownext){
        ListNode* curr=slownext;
        ListNode * nextnode=slownext;
        ListNode * prev=NULL;
        while(nextnode!=NULL){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode * fast=head;
        ListNode * slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newhead=reverse(slow->next);
        ListNode * first=head;
        ListNode * second=newhead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverse(newhead);
                return false;
            }
            first=first->next;
            second=second->next;

        }
        reverse(newhead);
        return true;
    }
};