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
    ListNode* deleteMiddle(ListNode* head) {
        int count=1;
        ListNode*temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return NULL;
        }
        count/=2;
        temp=head;
        ListNode*prev=head;
        for(int i=0;i<count;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};