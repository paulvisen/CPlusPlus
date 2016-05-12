#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int num){
	vector<int> ret(1, 0);
	int count = 0;
	while (count < num){
		int sz = ret.size();
		for (int i = 0; i < sz&&count < num; ++i,++count){
			ret.push_back(ret[i] + 1);
		}
	}
	return ret;
}





