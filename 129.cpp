/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void compute(TreeNode*root,int&ans,int&temp){
    
    temp=temp*10;
    temp+=root->val;
    if(root->left)
    compute(root->left,ans,temp);
   
    if(root->right)    
    compute(root->right,ans,temp);
    if(root->left==NULL&&root->right==NULL)
        ans+=temp;
    temp/=10;
    return;  
}

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        if(!root)
            return ans;
        int temp=0;
        compute(root,ans,temp);
        return ans;
        
    }
};