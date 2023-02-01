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
        vector<int>ans;
        int dec=0;
        while(head!=NULL)
        {
            int t=head->val;
            ans.push_back(t);
            head=head->next;
        } 
        reverse(ans.begin(), ans.end());
        for (int i=0;i<ans.size();i++)
        {
            int p=(pow(2,i)*ans[i]);
            dec=dec+p;
        }
        return dec;
    }
};
