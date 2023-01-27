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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL)
            return head2;
        if(head2 == NULL)
            return head1;
        ListNode * ptr = head1;
        if(head1 -> val > head2 -> val)
        {
            ptr = head2;
            head2 = head2 -> next;
        }
        else
        {
            head1 = head1 -> next;
        }
        ListNode *curr = ptr;
        while(head1 &&  head2)
        {
            if(head1 -> val < head2 -> val){
                curr->next = head1;
                head1 = head1 -> next;
            }
            else{
                curr->next = head2;
                head2 = head2 -> next;
            }
            curr = curr -> next;       
        }
        if(!head1)
            curr -> next = head2;
        else
            curr -> next = head1;
            
        return ptr;
     // return NULL;
    }
};
