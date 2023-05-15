// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/

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
    ListNode* swapNodes(ListNode* head, int k) {
        int l=0;
        ListNode *t=head;
        ListNode *temp=head;
        ListNode *cur=head;
        while(t!=NULL)
        {
            t=t->next;
            l++;
        }
        int n=l-k+1;
        for (int i=1;i<k;i++)
        {
            temp=temp->next;
        }
        for (int i=1;i<n;i++)
        {
            cur=cur->next;
        }
        swap(cur->val,temp->val);
        return head;
    }
};
