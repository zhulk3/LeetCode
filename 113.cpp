
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void judge(TreeNode*root,vector<vector<int>>&ans,vector<int>&temp,vector<TreeNode*>&store,int &currentSum,int sum){
    
    currentSum+=root->val;
    temp.push_back(root->val);
    store.push_back(root);
    bool isLeaf=root->left==NULL&&root->right==NULL;
    if(isLeaf&&currentSum==sum){
        ans.push_back(temp);
    }
    

    if(root->left)
        judge(root->left,ans,temp,store,currentSum,sum);
    if(root->right)
        judge(root->right,ans,temp,store,currentSum,sum);
    currentSum-=root->val;
     temp.pop_back();
     return;
}

class Solution {8
public:
    vector<vector<int>> pathSum(TreeNode* root,int sum) {
        vector<vector<int> >ans;
        vector<int>temp;
        vector<TreeNode*>store;
        if(!root)
            return ans;
        int currentSum=0;
        judge(root,ans,temp,store,currentSum,sum);
        return ans;
    }
};