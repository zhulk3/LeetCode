class Solution {
public:
	TreeNode* increasingBST(TreeNode* root) {
		vector <int> repository;
		inOrderTraversal(root, repository);
		TreeNode* head = new TreeNode(repository[0]);
		TreeNode* curr = head;
		for (int i = 1; i < repository.size(); i++) {
			curr->right = new TreeNode(repository[i]);
			curr->left = NULL;
			curr = curr->right;
		}
		return head;
	}

	void inOrderTraversal(TreeNode* node, vector<int> &repository) {
		if (!node) {
			return;
		}
		else {
			inOrderTraversal(node->left, repository);
			repository.push_back(node->val);
			inOrderTraversal(node->right, repository);
		}
	}
};