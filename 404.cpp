/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void compute(TreeNode*root,int&sum){
    if(root->left){
        if(root->left->left==NULL&&root->left->right==NULL){
            sum+=root->left->val;
        compute(root->left,sum);
        }
        else
            compute(root->left,sum);
    }
    if(root->right)
        compute(root->right,sum);
    return;
}
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(!root)
            return sum;
        compute(root,sum);
        return sum;
    }
};