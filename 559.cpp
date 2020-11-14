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

void compute(Node*root,int&ans,int&cnt){
    if(!root)
        return;
    cnt++;
    for(int i=0;i<root->children.size();i++){
        compute(root->children[i],ans,cnt);
    }
    if(ans<cnt)
        ans=cnt;
    cnt--;
    return;
}
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int ans=0;
        int cnt=0;
        compute(root,ans,cnt);
        return ans;
    }
};