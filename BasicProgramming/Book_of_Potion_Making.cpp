//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	string n;
	cin >> n;
	int sum = 0;
	int len = n.length();
	for(int i=0;i<len;i++) {
		sum = sum + (i+1)*n[i];
	}

	if(sum % 11 == 0)
		cout << "Legal ISBN";
	else 
		cout << "Illegal ISBN";

	return 0;
}
