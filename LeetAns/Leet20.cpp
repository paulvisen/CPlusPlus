#include<iostream>
#include<stack>

using namespace std;

/////利用对应的栈操作，进栈出栈符号，最后能够成功出栈，而且栈为空就说明符号是配对的。

bool isValid(string s) {

	int s_len = s.length();
	stack<char> flagStack;
	for (int i = 0; i < s_len; i++){
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			flagStack.push(s[i]);
		else
		{
			if (flagStack.empty())
				return false;
			char temp = flagStack.top();
			if (s[i] == ')'&&temp == '(' || temp == '['&&s[i] == ']' || temp == '{' &&s[i] == '}')
				flagStack.pop();
			else
				return false;
		}


	}
	if (flagStack.empty())
		return true;
	else
		return false;
}

//void main(){
//	cout << isValid("()[]]{}") << endl;
//
//}
