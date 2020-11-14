/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void judge(struct TreeNode*root,map<int,int>&mp){
    if(!root)
        return;
    int t=root->val;
    if(mp.find(t)==mp.end()){
        pair<int,int>middle;
        middle.first=t;
        middle.second=1;
        mp.insert(middle);
    }
    else
        mp[t]++;
    if(mp.size()>1)
        return;
    judge(root->left,mp);
    if(mp.size()>1)
        return;
    judge(root->right,mp);
    return;
}


class Solution {
public:
bool isUnivalTree(struct TreeNode* root){
    if(!root)
        return false;
    map<int,int>mp;
    judge(root,mp);
    if(mp.size()>1)
        return false;
    return true;

}
};