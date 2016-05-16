#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> nums){

	int n = nums.size();
	int except = n*(n + 1) / 2;
	for (int i = 0; i < n; i++){
		except -= nums[i];
	}
	return except;
}


//
//
//void main(){
//
//	vector<int> nums = { 0, 1, 2, 3, 5, 6 };
//	cout << missingNumber(nums) << endl;
//
//}
