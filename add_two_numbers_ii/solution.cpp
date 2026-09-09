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
    ListNode* reverse(ListNode*head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode*dummynode=new ListNode(-1);
        ListNode*curr=dummynode;
        ListNode*head1=l1;
        ListNode*head2=l2;
        int carry=0;
        while(l1 || l2){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            curr->next=new ListNode(sum%10);
            carry=sum/10;
            curr=curr->next;
        }
        if(carry){
            curr->next=new ListNode(1);
        }
        ListNode*head=reverse(dummynode->next);
        return head;
    }
};