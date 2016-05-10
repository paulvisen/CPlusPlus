#include <iostream>
#include <string>
using namespace std;

//////leetcode 345  一前一后两个指针   遇到元音字母就交换   

string vowels = "AaEeIiOoUu";

bool isVowels(char input){

	int length = vowels.size();

	for (int i = 0; i < length; i++)
	{
		if (input == vowels[i])
			return true;
	}

	return false;
}


string reverseVowels(string s)
{
	int left = 0;
	int right = s.size() - 1;
	char temp;

	while (left < right){

		while (left < right && !isVowels(s[left]))
		{
			left++;
		}
		while (left < right && !isVowels(s[right]))
		{
			right--;
		}
		if (left >= right){
			break;
		}

		/////swap the left and the right value

		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;

	}

	return s;
}



//void main()
//{
//
//	cout << reverseVowels("hello") << endl;
//
//	cout << reverseVowels("leetcode") << endl;
//
//
//}

