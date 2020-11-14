/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        deque<TreeNode*>bst;
        bst.push_back(root);
        int on=1;
        int under=0;
        int ans=0;
        
        vector<int>temp;
        while(bst.size()>0){
            TreeNode*now=bst.front();
            bst.pop_front();
            on--;
            temp.push_back(now->val);
            if(now->left){
                bst.push_back(now->left);
                under++;
            }
            if(now->right){
                bst.push_back(now->right);
                under++;
            }
            if(on==0&&under!=0){
                on=under;
                temp.clear();
                under=0;
            }
        }
        return temp[0];
    }
};