//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int k;
	cin >> k;
	for(int i=0;i<k;i++) {
		if(str[i]=='9')
			k++;
		else 
			str[i]='9';
	}
	cout << str;
	return 0;
}
