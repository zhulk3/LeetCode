
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void func(TreeNode*root,int&depth,int&cnt){
    cnt++;
    if(root->left)
        func(root->left,depth,cnt);
    if(root->right)
        func(root->right,depth,cnt);
    if(!root->left&&!root->right){
        
        if(depth>cnt)
        depth=cnt;
    }
    cnt--;
    return; 
}
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int depth=0x7fffffff;
        int cnt=0;
        func(root,depth,cnt);
        return depth;
    }
};