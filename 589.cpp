/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

void compute(Node*root,vector<int>&ans){
    ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            if(root->children[i])
                compute(root->children[i],ans);
        }
    return ;
}
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
        compute(root,ans);
        return ans;
    }
};