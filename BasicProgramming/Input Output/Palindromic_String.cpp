//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int temp=0;
	cin >> str;
	int len = str.length();
	for(int i=0;i<len;i++) {
		if(str[i] != str[len-i-1]) {
			temp = 1;
			break;
		
		}
	}

	if(temp == 1) {
		cout << "NO" ;
	}
	else
		cout << "YES";
	return 0;
}
