#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

/////使用优先队列，自动进行排序

vector<int> topKFrequent(vector<int>& nums, int k) {
	unordered_map<int, int> hash;
	priority_queue<pair<int, int>> heap;
	vector<int> ret;

	for (int num : nums){
		hash[num]++;
	}

	for (auto it : hash){
		heap.push(make_pair(it.second, it.first));
	}

	for (int i = 0; i < k; i++){
		ret.push_back(heap.top().second);
		heap.pop();
	}
	return ret;
}


vector<int> topKFrequent1(vector<int> nums, int k){////桶排序
	unordered_map<int, int> hash;
	vector<vector<int> > buckets(nums.size() +1);
	vector<int> ret;

	for (int num : nums){
		hash[num]++;
	}

	for (auto it : hash){
		buckets[it.second].push_back(it.first);
	}

	for (int i = buckets.size() - 1; i > 0; --i){
		for (auto num : buckets[i]){
			ret.push_back(num);
			if (ret.size() == k)
				return ret;
		}
	}

	return ret;
}
//
//void main(){
//	vector<int> nums = { 1, 2, 3, 2, 1, 1, 3, 5 };
//	vector<int> ret = topKFrequent1(nums, 3);
//	return;
//}





