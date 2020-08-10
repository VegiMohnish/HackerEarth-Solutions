//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

//Problem - Toggle String

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	for(int i=0;i<len;i++) {
		if(str[i]>='a' && str[i]<='z')
			str[i] = str[i] - 32;
		else if(str[i]>='A' && str[i]<='Z')
			str[i] = str[i] + 32;
	}
	cout << str << endl;
	return 0;

}
