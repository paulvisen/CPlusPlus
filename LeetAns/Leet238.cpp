#include <iostream>
#include <vector>

using namespace std;
////计算数组的元素所有乘积，然后对应除以每一个位置的数字，

vector<int> productExceptSelf(vector<int>& nums) {
	vector<int> res;
	int length = nums.size();
	int zeroCount = 0;
	long int product = 1;
	for (int i = 0; i < length; i++){
		if (nums[i] != 0){
			product *= nums[i];
		}
		else{
			zeroCount++;
		}

	}

	for (int i = 0; i < length; i++){
		if (nums[i] != 0){
			if (zeroCount != 0){
				res.push_back(0);
			}
			else
			{
				res.push_back(product / nums[i]);
			}
		}
		else
		{
			if (zeroCount == 1){
				res.push_back(product);
			}
			else
			{
				res.push_back(0);
			}
		}


	}
	return res;
}

//
//void main(){
//	vector<int> test = { 1, 2, 3, 4 };
//	vector<int> ret = productExceptSelf(test);
//	return;
//
//}
//
