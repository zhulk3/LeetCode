/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void compute(TreeNode*root,vector<int>&ans){
    if(root->left)
        compute(root->left,ans);
    if(root->right)
        compute(root->right,ans);
    ans.push_back(root->val);
    return ;
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root)
            return ans;
        compute(root,ans);
        return ans;
    }
};