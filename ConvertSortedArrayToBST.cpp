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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return hel(nums, 0, nums.size()-1);
    }
    
    TreeNode* hel(vector<int>& n, int left, int right){
        if(left > right){
            return NULL;
        }
        int mid = (left+ right) / 2;
        TreeNode* t = new TreeNode(n[mid]);
        t->left = hel(n, left, mid-1);
        t->right = hel(n, mid+1 , right);
        return t;
    }
};
