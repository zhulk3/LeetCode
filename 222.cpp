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
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        deque<TreeNode*>store;
        store.push_back(root);
        int ans=0;
        while(store.size()>0){
            TreeNode*temp=store.front();
            ans++;
            store.pop_front();
            if(temp->left)
                store.push_back(temp->left);
            if(temp->right)
                store.push_back(temp->right);
        }
        return ans;
    }
};