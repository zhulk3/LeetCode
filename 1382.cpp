/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void trivel(TreeNode*root,vector<int>&store){
    store.push_back(root->val);
    if(root->left)
        trivel(root->left,store);
    if(root->right)
        trivel(root->right,store);
    return;
}

TreeNode*construct(vector<int>&store,int start,int end){
    if(start>end)
        return NULL;
    int middle=(end-start)/2+start;
    TreeNode *root=new TreeNode(store[middle]);
    root->left=construct(store,start,middle-1);
    root->right=construct(store,middle+1,end);
    return root;
}
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>store;
        trivel(root,store);
        sort(store.begin(),store.end());
        int len=store.size();
        TreeNode*newRoot=construct(store,0,len-1);
        return newRoot;
    }
};