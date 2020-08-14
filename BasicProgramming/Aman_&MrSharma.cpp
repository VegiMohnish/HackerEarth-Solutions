//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int d;
	cin >> d;
	int count=0;
	for(long int i=0;i<d;i++) {
		long int r,x;
		cin >> r >> x;
		long int c = 44*r;
		long int m = 700*x;
		if(c<=m) {
			count++;
		}

	}
	cout << count;
	
	return 0;
}
