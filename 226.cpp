/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        TreeNode*ans=new TreeNode(root->val);
        if(root->left)
            ans->right=invertTree(root->left);
        if(root->right)
            ans->left=invertTree(root->right);
        return ans;
    }
};