//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};
//
//vector<string> binaryTreePaths(TreeNode* root) {
//
//	vector<string> vs;
//
//	if (root == NULL)
//		return vs;
//	if (root->left == NULL&&root->right == NULL){
//		char buffer[1024];
//		sprintf(buffer, "%d", root->val);
//		vs.push_back(buffer);
//		return vs;
//	}
//
//	if (root->left){
//		vector<string> lefts = binaryTreePaths(root->left);
//		for (int i = 0; i < lefts.size(); i++){
//			char *buffer = new char[lefts[i].size() + 156];
//			sprintf(buffer, "%d->%s", root->val, lefts[i].c_str());
//			vs.push_back(buffer);
//			delete[] buffer;
//		}
//	}
//
//	if (root->right){
//		vector<string> rights = binaryTreePaths(root->right);
//		for (int i = 0; i < rights.size(); i++){
//			char *buffer = new char[rights[i].size() + 156];
//			sprintf(buffer, "%d->%s", root->val, rights[i].c_str());
//			vs.push_back(buffer);
//			delete[] buffer;
//		}
//	}
//
//	return vs;
//
//}
//
//
