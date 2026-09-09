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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp=head;
        ListNode*start=NULL;
        int count=1;
        while(count<left){
            start=temp;
            temp=temp->next;
            count++;
        }
        ListNode*leftnode=temp;
        ListNode*prev1=NULL;
        ListNode*front=NULL;
        
        while(temp!=NULL && count<=right){
            front=temp->next;
            temp->next=prev1;
            prev1=temp;
            temp=front;
            count++;
        }
        if(start){
            start->next=prev1;
        }
        else{
            head=prev1;
        }
        leftnode->next=temp;
        return head;
    }
};
