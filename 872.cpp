/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void judge(TreeNode*root,vector<int>&store){
    
    if(root->left)
        judge(root->left,store);
    if(root->right)
        judge(root->right,store);
    if(!root->left&&!root->right){
        int t=root->val;
        store.push_back(t);
    }
        
    return;
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1&&!root2)
            return true;
        if(!root1||!root2)
            return false;
        vector<int>store1;
        vector<int>store2;
        judge(root1,store1);
        judge(root2,store2);
        if(store1==store2)
            return true;
        return false;
    }
};