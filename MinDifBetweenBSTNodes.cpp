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
public:
vector<int>ans;
    void inorder(TreeNode* root)
    {
        if (root==NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int d=INT_MAX;
        sort(ans.begin(),ans.end());
        for (int i=0;i<ans.size()-1;i++)
        {
            if((ans[i+1]-ans[i])<d)
                d=ans[i+1]-ans[i];
        }
        return d;
    }
};
