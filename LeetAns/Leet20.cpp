#include<iostream>
#include<stack>

using namespace std;

/////���ö�Ӧ��ջ��������ջ��ջ���ţ�����ܹ��ɹ���ջ������ջΪ�վ�˵����������Եġ�

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
