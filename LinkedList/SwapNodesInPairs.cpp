// https://leetcode.com/problems/swap-nodes-in-pairs/description/

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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* t=new ListNode(0);
        t->next=head;
        ListNode *cur=t;

        while(cur->next!=NULL && cur->next->next!=NULL)
        {
            ListNode *f=cur->next;
            ListNode *s=cur->next->next;
            cur->next=s;
            f->next=s->next;
            s->next=f;
            cur=cur->next->next;
        }
        return t->next;
    }
}; 
