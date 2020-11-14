
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
string arrow="->";

  void judge(TreeNode*root,vector<string>&ans,vector<string>&temp){
      bool r=false;
    if(temp.size()>0){
        temp.push_back(arrow);
        temp.push_back(to_string(root->val));
    }
    
      else{
           temp.push_back(to_string(root->val));
          r=true;
      }
   
    bool isLeaf=root->left==NULL&&root->right==NULL;
    if(isLeaf){
        string s;
        for(int i=0;i<temp.size();i++){
            s=s+temp[i];
        }
        ans.push_back(s);
    }
    

    if(root->left)
        judge(root->left,ans,temp);
    if(root->right)
        judge(root->right,ans,temp);
     
       if(r){
           temp.pop_back();
       }
      else{
          temp.pop_back();

           temp.pop_back();
      }
       
     return;
}


class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        vector<string> temp;
        if(root==NULL)
            return ans;
        judge(root,ans,temp);
        return ans;
    }
};

