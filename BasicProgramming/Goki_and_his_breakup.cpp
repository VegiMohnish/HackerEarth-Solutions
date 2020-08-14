//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n,x;
	cin >> n;
	cin >> x;
	long int y[n];
	for(long int i=1;i<=n;i++) {
		cin >> y[i];
		if(y[i] >= x)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
