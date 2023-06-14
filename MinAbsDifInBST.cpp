// https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int>ans;
    int min=INT_MAX;
    void inorder(TreeNode* r)
    {
        if(r==NULL)
            return;
        inorder(r->left);
        ans.push_back(r->val);
        inorder(r->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
     inorder(root);
     int min=INT_MAX;
     for (int i=0;i<ans.size()-1;i++)
     {
         if((ans[i+1]-ans[i])<min)
            min=ans[i+1]-ans[i];
     }
     return min;
    }
};
