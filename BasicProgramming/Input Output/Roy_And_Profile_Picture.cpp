//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n,l,w,h;
	cin >> l;
	cin >> n;
	for(long int i=0;i<n;i++) {
		cin >> w >> h;
		if(w<l || h<l) {
			cout << "UPLOAD ANOTHER" << endl;
		}
		else if(w == h) {
			cout << "ACCEPTED" << endl;
		}

		else {
			cout << "CROP IT" << endl;

		}
	}

	return 0;
}
