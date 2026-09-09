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
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        int m=count-n;
        if(m==0){
            head=head->next;
            return head;
        }
        ListNode*prev=head;
        for(int i=0;i<m;i++){
            prev=temp;
            temp=temp->next;
        }
        ListNode*remove=temp->next;
        prev->next=remove;
        return head;
    }
};