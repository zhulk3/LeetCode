/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void func(TreeNode*root,vector<vector<int> >&ans){
    
}
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> >ans;
        vector<int>temp;
        deque<TreeNode*>store;
        if(root==NULL)
            return ans;
        int on=0;
        int under=0;
        store.push_back(root);
        on=1;
        while(store.size()>0){
            TreeNode*now=store.front();
            store.pop_front();
            on--;
            temp.push_back(now->val);
            
            if(now->left){
                under++;
                store.push_back(now->left);
            }
                
            if(now->right){
                under++;
                store.push_back(now->right);
            }
            if(on<=0){
                ans.push_back(temp);
                temp.clear();
                on=under;
                under=0;
            }
                
        }
        return ans;
    }
};