#include <iostream>

using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
  void preOrder1(TreeNode *root,int &sum,int L,int R)     //µÝ¹éÇ°Ðò±éÀú 
  {
	  if (root != NULL)
	  {
		  if(root->val>=L&&root->val<=R)
			  sum += root->val;
		  preOrder1(root->left,sum,L,R);
		  preOrder1(root->right,sum,L,R);
	  }
  }

class Solution {
public:
	int rangeSumBST(TreeNode* root, int L, int R) {
		int sum = 0;
		TreeNode*temp = root;
		preOrder1(temp, sum,L,R);
		return sum;
	}
};