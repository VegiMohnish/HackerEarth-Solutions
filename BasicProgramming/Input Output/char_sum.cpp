//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	int sum = 0;
	for(int i=0;i<len;i++) {
		sum = sum + (str[i]-96);
	}

	cout << sum;
	return 0;
}
