#include <iostream>

using namespace std;

bool isPowerOfFour(int num){

	if (num <= 0)
		return false;
	else
		return (num & (num - 1) )== 0 && ((num & 0x55555555) != 0);

}

void main(){

	cout << isPowerOfFour(16) << endl;
}