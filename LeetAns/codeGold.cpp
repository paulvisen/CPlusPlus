#include <iostream>

using namespace std;

/////////////程序员面试金典  1.2 反转字符串  用c++  不用额外的分配存储空间



void reverse(char *str){
	char* end = str;
	char temp;
	if (str){
		while (*end){
			++end;
		}
		end--;/////回退一个指针位置，char* 数组最后的一个位置是NULL,不作考虑。

		//////从头开始交换两个字符的位置，两个指针在中间碰头的时候停止交换
		while (str < end){
			temp = *str;
			*str++ = *end;
			*end-- = temp;
		}
	}
}

void main(){
	
	
	return;

}
