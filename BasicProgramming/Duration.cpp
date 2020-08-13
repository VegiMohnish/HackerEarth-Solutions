//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int sh,sm,eh,em;
		cin >> sh >> sm >> eh >> em;
		if(em >= sm) {
			cout << eh - sh << " " << em - sm << endl;
		}

		else {
			cout << eh - sh - 1 << " " << 60 - abs(em - sm) << endl;
		}

	}
	return 0;
}
