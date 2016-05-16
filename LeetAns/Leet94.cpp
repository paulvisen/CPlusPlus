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

vector<int> inorderTraversal(TreeNode* root) {
	vector<int> res;
	stack<TreeNode*> stack_pre;
	
	TreeNode* top_node = root;
	while (top_node||!stack_pre.empty()){
		if (top_node != NULL)
		{
			stack_pre.push(top_node);
			top_node = top_node->left;
		}
		else
		{
			top_node = stack_pre.top();
			stack_pre.pop();

			res.push_back(top_node->val);
			top_node = top_node->right;
		}

	}
	return res;
}


