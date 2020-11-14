/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void func(TreeNode*root,vector<int>&ans){
    
    if(root->left)
        func(root->left,ans);
    int t=root->val;
    ans.push_back(t);
    if(root->right)
        func(root->right,ans);
    return;
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
        func(root,ans);
        return ans;
        
    }
};