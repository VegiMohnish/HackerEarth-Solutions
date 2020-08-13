//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int flag = 0;
	if((str[0] + str[1])%2 != 0)
		flag = 1;
	if((str[3] + str[4])%2 != 0)
		flag = 1;
	if((str[4] + str[5])%2 != 0)
		flag = 1;
	if((str[7] + str[8])%2 != 0)
		flag = 1;
	if(str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' || str[2] == 'U' || str[2] == 'Y')
		flag = 1;
	if(str[6] != '-')
		flag = 1;
	if(flag == 0)
		cout << "valid";
	else if(flag == 1)
		cout << "invalid";

	return 0;
}
