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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
        if(head==NULL || head->next==NULL) return head;
        
        // ListNode * temp = head->next;
        // v.push_back(head->val);
        // while(temp){
        //     if((*v.rbegin())!= temp->val)
        //         v.push_back(temp->val);

        //     temp=temp->next;
        // }
        // temp=head;
        // ListNode * prev=NULL;
        // int i =0;
        // while(i<v.size()){
        //     temp->val=v[i];
        //     i++;
        //     prev=temp;
        //     temp=temp->next;
        // }   
        // prev->next=NULL;
        // return head;



        ListNode * first=head;
        ListNode * second=head->next;
        if(head->next==NULL)  return head;
        while(second){
            if(first->val == second->val){
                first->next=second->next;
                delete second ;
                second= first->next;

            }
            else{
                first=second;
                second = second->next;
            }
        }
        return head;
    }
};