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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<vector<int> >ans;
        vector<double>last;
        if(root==NULL)
            return last;
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
        
        
        for(int i=0;i<ans.size();i++){
            double sum=0;
            for(int j=0;j<ans[i].size();j++){
                sum+=ans[i][j];
            }
            last.push_back(sum/ans[i].size());
        }
        return last;
        
    }
};