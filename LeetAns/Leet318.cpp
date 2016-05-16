#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int maxProduct(vector<string>& words) {
	int len = words.size();
	if (len <= 1)
		return 0;
	int maxn = 0;
	int *Bits = new int[len];
	fill(Bits, Bits + len, 0);
	for (int i = 0; i <len; i++){
		int t = 0;
		for (int j = 0; j < words[i].size(); j++){
			Bits[i] |= (1 << (words[i][j] - 'a'));//////根据对应abcdefg的位置依次表示各个位置的字母出现情况

		}
		for (int j = 0; j < i; j++){
			if (Bits[i] & Bits[j])
				continue;
			maxn = max(maxn, (int)(words[i].size()*words[j].size()));
		}


	}
	delete []Bits;
	return maxn;
}


void main(){
	
	vector<string> strvec = { "abcw", "baz", "foo", "bar", "xtfn", "abcdef" };

	cout << maxProduct(strvec) << endl;


}
