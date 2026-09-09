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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*dummynode=new ListNode(-1);
        dummynode->next=list1;
        ListNode*curr=dummynode;
        int count=0;
        while(curr->next!=NULL){
            if(count==a){
                ListNode*temp=curr;
                ListNode*curr2=list2;
                while(curr2->next!=NULL){
                    curr2=curr2->next;
                }
                while(count!=b+1){
                    curr=curr->next;
                    count++;
                }
                temp->next=list2;
                curr2->next=curr->next;
                return dummynode->next;
            }
            curr=curr->next;
            count++;
        }
        return NULL;
    }
};