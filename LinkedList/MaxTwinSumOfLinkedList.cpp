// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

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
    int pairSum(ListNode* head) {
        vector<int>ans;
        int max=0;
        while(head!=NULL)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        if(n==2)
            return ans[0]+ans[1];
        for (int i=0;i<n/2;i++)
        {
            if((ans[i]+ans[n-1-i])>max)
                max=ans[i]+ans[n-1-i];
        }
        return max;
    }
};
