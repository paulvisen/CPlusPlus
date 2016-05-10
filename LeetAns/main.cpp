#include <iostream>
#include <string>

using namespace std;

string getHint(string secret, string guess){

	int bulls = 0;
	int cows = 0;
	int num[10] = { 0 };

	for (int i = 0; i < guess.size(); i++){
		if (secret[i] == guess[i]){
			bulls = bulls + 1;
		}
		else
		{
			num[guess[i] - '0']++;
		}
	}

	for (int i = 0; i < secret.size(); i++){
		if (secret[i] != guess[i] && num[secret[i] - '0']>0)
		{
			cows++;
			num[secret[i] - '0']--;
		}
	}
	char buff[20];
	sprintf_s(buff, "%dA%dB", bulls, cows);
	return buff;
}


void main()
{

	cout << getHint("1807", "7810") << endl;

}