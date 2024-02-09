// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
       ListNode* dummy=new ListNode(0);
       dummy->next=head;
       ListNode* fast=dummy;
       ListNode* slow=dummy;
       for (int i=0;i<=n;i++)
       {
           if(fast==NULL)
            return NULL;
            fast=fast->next;
       }
       while(fast!=NULL)
       {
           fast=fast->next;
           slow=slow->next;
       }
       ListNode* temp=slow->next;
       slow->next=slow->next->next;
       delete temp;

       ListNode* res=dummy->next;
       delete dummy;
       return res;
    }
};
