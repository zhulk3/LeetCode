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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        if(!root1&&!root2)
            return ans;
        deque<TreeNode*>store;
        if(root1){
            store.push_back(root1);
            while(store.size()>0){
                TreeNode*ptr=store.front();
                store.pop_front();
                ans.push_back(ptr->val);
                if(ptr->left)
                    store.push_back(ptr->left);
                if(ptr->right)
                    store.push_back(ptr->right);
            }
        }
        if(root2){
            store.push_back(root2);
            while(store.size()>0){
                TreeNode*ptr=store.front();
                store.pop_front();
                ans.push_back(ptr->val);
                if(ptr->left)
                    store.push_back(ptr->left);
                if(ptr->right)
                    store.push_back(ptr->right);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};