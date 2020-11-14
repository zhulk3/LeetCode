/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void compute(TreeNode*root,int&sum,int &now,int&depth){
    now++;
    if(root->left)
        compute(root->left,sum,now,depth);
    if(root->right)
        compute(root->right,sum,now,depth);
    if(depth<now){
        depth=now;
        sum=0;
        sum+=root->val;
    }
    else if(depth==now)
        sum+=root->val;
    now--;
    return;
}
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
       if(!root)
           return 0;
        int sum=0;
        int now=0;
        int depth=0;
        compute(root,sum,now,depth);
        return sum;
    }
};