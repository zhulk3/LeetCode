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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(!root)
            return ans;
        deque<TreeNode*>bst;
        bst.push_back(root);
        int on=1;
        int under=0;
        int max=0x80000000;
        while(bst.size()>0){
            TreeNode* now=bst.front();
            bst.pop_front();
            on--;
            if(now->val>max)
                max=now->val;
            if(now->left){
                bst.push_back(now->left);
                under++;
            }
            if(now->right){
                bst.push_back(now->right);
                under++;
            }
            if(on==0){
                on=under;
                ans.push_back(max);
                max=0x80000000;
                under=0;
            }   
        }
        return ans;
    }
};