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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head;
        while(temp!=NULL && temp->next!=NULL && temp->next->next!=NULL){
            if(temp->val==0){
                temp=temp->next;
                ListNode*dummy=temp;
                
                while(temp->val!=0){
                    temp=temp->next;
                    if(temp->val!=0){
                        dummy->val+=temp->val;
                    }
                }
                dummy->next=temp->next;
                temp=temp;
            }
            else{
                temp=temp->next;
            }
            
        }
        return head->next;
    }
};
