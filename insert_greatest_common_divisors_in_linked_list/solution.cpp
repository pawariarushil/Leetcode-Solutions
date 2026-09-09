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
    int gcd(int num1,int num2){
        if(num2==0){
            return num1;
        }
        return gcd(num2,num1%num2);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*dummy2=new ListNode(-1);
        ListNode*curr1=head;
        ListNode*curr2=dummy2;
        while(curr1->next!=NULL){
            curr2->next=new ListNode(curr1->val);
            curr2=curr2->next;
            curr2->next=new ListNode(gcd(curr1->val,curr1->next->val));
            curr2=curr2->next;
            curr1=curr1->next;
        }
        curr2->next=new ListNode(curr1->val);
        return dummy2->next;
        
    }
};