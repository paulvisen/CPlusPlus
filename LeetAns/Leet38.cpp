#include <iostream>
#include <string>

using namespace std;

string tostring(int num){
	string ret = "";
	while (num){
		int mod = num % 10;
		ret = char('0' + mod) + ret;
		num /= 10;
	}
	return ret;
}

/////��ǰһ���ַ����ļ���������Ϊ����һ������
string countAndSay(int n) {
	
	if (n < 0)
		return NULL;
	string seq = "1";
	for (int i = 1; i < n; i++){
		string temp = "";
		int count = 0;
		char current = seq[0];
		int index = 0;
		while (index < seq.length()){
			if (seq[index] == current)
				count++;
			else
			{
				temp += tostring(count) + current;
				current = seq[index];
				count = 1;
			}
			index++;

		}
		temp += tostring(count) + current;
		seq = temp;
	}
	return seq;
	
}


//void main(){
//
//	cout << countAndSay(2) << endl;
//	cout << countAndSay(1) << endl;
//	cout << countAndSay(4) << endl;
//
//}
