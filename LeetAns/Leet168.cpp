#include <iostream>
#include <string>

using namespace std;


string convertToTitle(int n){
	string ret = "";
	while (n){
		ret = (char)((n - 1) % 26 + 'A') + ret;
		n = (n - 1) / 26;
	}
	return ret;
}

