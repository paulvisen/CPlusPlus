#include <iostream>


using namespace std;

int *dp;

int dfs(int nodes){
	if (nodes <= 1)return 1;

	if (dp[nodes] != 0)
		return dp[nodes];
	int total=0;
	for (int i = 0; i < nodes; i++){
		total += dfs(i) * dfs(nodes - i - 1);

	}
	dp[nodes] = total;
	return total;
}

int numTrees(int n){
	dp = new int[n + 1];
	memset(dp, 0, sizeof(int)*(n + 1));
	return dfs(n);
}


//void main()
//{
//	cout << numTrees(2) << endl;
//	cout << numTrees(3) << endl;
//	cout << numTrees(4) << endl;
//	cout << numTrees(5) << endl;
//}
