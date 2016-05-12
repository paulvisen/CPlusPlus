#include <iostream>
#include <string>
#include <vector>

using namespace std;


////
vector<int> getMainVersion(string version){
	vector<int> result;
	if (version.size() <= 0){
		return result;
	}
	int lastPos = 0;
	int index;
	while ((index = version.find(".", lastPos) != -1))
	{
		if (lastPos == index){
			result.push_back(0);
		}
		else
		{
			string substr = version.substr(lastPos, index - lastPos);
			result.push_back(atoi(substr.c_str));
		}
		lastPos = index + 1;
	}
	string lastStr = version.substr(lastPos);
	result.push_back(atoi(lastStr.c_str()));
	return result;
}


int compareVersion(string version1, string version2) {
	vector<int> v1 = getMainVersion(version1);
	vector<int> v2 = getMainVersion(version2);

	int length = v1.size() - v2.size();

	for (int i = 0; i < abs(length); i++){
		if (length>0){
			v2.push_back(0);
		}
		else
		{
			v1.push_back(0);
		}

		for (int index = 0; index < v1.size(); index++){
			if (v1[index] != v2[index]){
				return (v1[index]>v2[index]) ? 1 : -1;
			}
		}
		return 0;

	}
}

