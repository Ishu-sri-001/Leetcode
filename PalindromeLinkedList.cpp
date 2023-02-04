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
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        vector<int>b;
        while(head!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        for (int i=a.size()-1;i>=0;i--)
        {
            b.push_back(a[i]);
        }
        for (int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};
