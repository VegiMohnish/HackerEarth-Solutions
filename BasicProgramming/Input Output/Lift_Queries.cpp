//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int A=0,B=7;
	for(int i=0;i<t;i++) {
		int n;
		cin >> n;
		if(abs(n-A)<=abs(B-n)) {
			cout << 'A' << endl;
			A = n;
		}
		else {
			cout << 'B' << endl;
			B = n;
		}
	}
	return 0;
}
