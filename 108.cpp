/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void compute(vector<int>&nums,TreeNode*root,int start,int end){
    int middle=(end-start)/2+start;
    
   
    root->val=nums[middle];
    if(start<middle){
        root->left=new TreeNode();
        compute(nums,root->left,start,middle-1);
    }
        
    if(middle<end){
        root->right=new TreeNode();
        compute(nums,root->right,middle+1,end);
    }
        
    return ;
    
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode*root=NULL;
        if(nums.size()<=0)
            return root;
        root=new TreeNode();
        compute(nums,root,0,nums.size()-1);
        return root;
    }
};