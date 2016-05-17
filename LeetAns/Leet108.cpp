#include <iostream>
#include <vector>

using namespace  std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

TreeNode* mySortedArrayToBST(vector<int> &num,int start,int end){
	if (start > end)
		return NULL;
	int mid = start + ((end - start) >> 1);
	TreeNode* node = new TreeNode(num[mid]);
	node->left = mySortedArrayToBST(num, start, mid - 1);
	node->right = mySortedArrayToBST(num, mid + 1, end);
	return node;
}



TreeNode* sortedArrayToBST(vector<int>& nums) {
	if (nums.size() == 0){
		return NULL;
	}
	return mySortedArrayToBST(nums, 0, nums.size() - 1);
}




