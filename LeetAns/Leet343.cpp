#include <iostream>


using namespace std;


/*  LeetCode 343
 *	问题在于要拆解出足够多的3，
 */

int integerBreak(int n) {
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	int ret = 1;
	while (n > 4){
		ret *= 3;
		n -= 3;
	}
	return ret*n;
}

//void main(){
//	cout << integerBreak(10) << endl;
//	cout << integerBreak(2) << endl;
//}
