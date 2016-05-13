#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
	int ret = 0;
	for (int i = 0; i < nums.size(); i++){
		ret ^= nums[i];
	}
	int mask = ret &(~(ret-1)) ; //////取出元素最后一个1的位置
	int A = 0, B = 0;
	for (int i = 0; i < nums.size(); i++){
		if (mask&nums[i])
			A ^= nums[i];
		else
			B ^= nums[i];
	}
	return vector<int>({ A, B });
}


//void main(){
//
//	vector<int> nums = { 1, 2, 1, 2, 3, 5 };
//	vector<int> result = singleNumber(nums);
//	cout << (3 ^ 5) << endl;
//}

