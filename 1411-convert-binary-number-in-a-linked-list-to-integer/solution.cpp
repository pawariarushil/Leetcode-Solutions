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
    int getDecimalValue(ListNode* head) {
        int size=0;
        int num=0;
        ListNode*temp=head;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            num+=pow(2,size--)*temp->val;
            temp=temp->next;
        }
        return num;
    }
};
