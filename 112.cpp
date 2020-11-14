/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool judge(TreeNode*root,int currentSum,vector<TreeNode*>&store,int sum){
    
    currentSum+=root->val;
    store.push_back(root);
    bool isLeaf=root->left==NULL&&root->right==NULL;
    if(isLeaf&&currentSum==sum){
        return true;
    }
    bool left=false;
    bool right=false;
    if(root->left)
        left=judge(root->left,currentSum,store,sum);
    if(root->right)
        right=judge(root->right,currentSum,store,sum);
    if(left||right)
        return true;
    store.pop_back();
    return false;
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        vector<TreeNode*>store;
        if(!root)
            return false;
        return judge(root,0,store,sum);
        
    }
};