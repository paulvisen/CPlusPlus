#include <iostream>
#include <vector>

////Leet 230
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

int calTreeSize(TreeNode* root){
	if (root == NULL)
		return 0;
	return calTreeSize(root->left) + calTreeSize(root->right) + 1;
}


int kthSmallest(TreeNode* root, int k) {
	if (root == NULL)
		return 0;
	int leftSize = calTreeSize(root->left);
	if (k == leftSize + 1){
		return root->val;
	}
	else if (leftSize >= k){
		return kthSmallest(root->left, k);
	}
	else {
		return kthSmallest(root->right, k - leftSize - 1);
	}

}




