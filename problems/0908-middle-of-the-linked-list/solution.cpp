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
    ListNode* middleNode(ListNode* head) {
        ListNode* dummynode=new ListNode();
        dummynode->next=head;
        ListNode* slow=dummynode;
        ListNode* fast=dummynode;
        while(fast->next!=NULL && fast->next->next!=NULL && slow->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->next;
    }
};
