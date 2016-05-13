#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
	int profit = 0;
	for (int i = 1; i < prices.size(); i++){
		int delta = prices[i] - prices[i - 1];
		if (delta>0){
			profit += delta;
		}
	}

	return profit;
}

//void main()
//{
//	vector<int> price = { 1, 2, 3, 4, 5, 3, 7, 9 };
//	cout << maxProfit(price) << endl;
//}