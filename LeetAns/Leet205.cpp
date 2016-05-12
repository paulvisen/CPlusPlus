#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

/////LeetCode 205  


bool isIsomorphic(string s, string t) {

	int slen = s.size();
	int tlen = t.size();

	if (slen != tlen)
		return false;

	unordered_map<char, char> m1;
	unordered_map<char, char> m2;


	for (int i = 0; i < slen; i++){
		////开始依次比较各个位置出现的字符
		char schar = s[i];
		char tchar = t[i];

		////比较是双向的  
		if (m1.find(schar) != m1.end() && m1[schar] != tchar)
			return false;

		if (m2.find(tchar) != m2.end() && m2[tchar] != schar)
			return false;

		m1[schar] = tchar;
		m2[tchar] = schar;

	}

	return true;

}


//void main()
//{
//	cout << isIsomorphic("egg", "add")<<endl;
//	cout << isIsomorphic("foo", "bar") << endl;
//	cout << isIsomorphic("paper", "title") << endl;
//
//}

