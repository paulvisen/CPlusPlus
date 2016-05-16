#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

vector<int> preorderTraversal(TreeNode* root) {
	vector<int> res;
	stack<TreeNode*> stack_pre;
	if (root == NULL)
		return res;
	stack_pre.push(root);
	while (!stack_pre.empty()){
		TreeNode* top_node = stack_pre.top();
		res.push_back(top_node->val);
		stack_pre.pop();
		if (top_node->right != NULL)
			stack_pre.push(top_node->right);
		if (top_node->left != NULL)
			stack_pre.push(top_node->left);
	}
	return res;
}


