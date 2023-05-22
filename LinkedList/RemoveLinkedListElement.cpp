// https://leetcode.com/problems/remove-linked-list-elements/description/

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
    ListNode* removeElements(ListNode* head, int v) {
        if(head==NULL)
            return head;
        if(head->val==v)
        {
            head=head->next;
        }
        while(head!=NULL && head->val==v)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
         ListNode* t=head;
        while(head!=NULL && head->next!=NULL) 
        {
            if(head->next->val==v)
            {
                ListNode *temp=head->next;
                head->next=temp->next;
                delete temp;
            }
            else 
                head=head->next;
        }
        return t;
    }
};
