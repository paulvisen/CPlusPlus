#include <iostream>

using namespace std;

/////////////����Ա���Խ��  1.2 ��ת�ַ���  ��c++  ���ö���ķ���洢�ռ�



void reverse(char *str){
	char* end = str;
	char temp;
	if (str){
		while (*end){
			++end;
		}
		end--;/////����һ��ָ��λ�ã�char* ��������һ��λ����NULL,�������ǡ�

		//////��ͷ��ʼ���������ַ���λ�ã�����ָ�����м���ͷ��ʱ��ֹͣ����
		while (str < end){
			temp = *str;
			*str++ = *end;
			*end-- = temp;
		}
	}
}

//void main(){
//	
//	
//	return;
//
//}
