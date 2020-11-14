/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void compute(TreeNode*root,int &ans,int &sum){
    sum+=1;
    if(ans<sum)
        ans=sum;
    if(root->left){
        compute(root->left,ans,sum);
    }
    if(root->right){
        compute(root->right,ans,sum);
    }
    sum-=1;
    return;
}
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int ans=0;
        int sum=0;
        compute(root,ans,sum);
        return ans;
    }
};