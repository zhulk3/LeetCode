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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >ans;
        if(root==NULL)
            return ans;
        int on=0;
        int under=0;
        vector<int>temp;
        deque<TreeNode*>store;
        store.push_back(root);
        on++;
        while(store.size()>0){
            TreeNode*now=store.front();
            on--;
            store.pop_front();
            temp.push_back(now->val);
            if(now->left){
                store.push_back(now->left);
                under++;
            }
            if(now->right){
                store.push_back(now->right);
                under++;  
            }
            
            if(on<=0){
                on=under;
                under=0;
                ans.push_back(temp);
                temp.clear();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};