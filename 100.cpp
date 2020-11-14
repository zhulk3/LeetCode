/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool judge(TreeNode* p, TreeNode* q){
    
    if(p->val!=q->val)
        return false;
    bool l=false;
    bool r=false;
    if(p->left&&q->left)
        l=judge(p->left,q->left);
    if(p->left==NULL&&q->left==NULL)
        l=true;
    if(p->right&&q->right)
        r=judge(p->right,q->right);
    if(p->right==NULL&&q->right==NULL)
        r=true;
    return l&&r;
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
        if(p==NULL||q==NULL)
            return false;
        return judge(p,q);
        
    }
};