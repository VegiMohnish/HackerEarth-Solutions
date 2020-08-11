//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main () {
	long long int n;
	cin >> n;
	long long int p=1;
	long long int a[n];
	for(long long int i=0;i<n;i++) {
		cin >> a[i];
		p = p * a[i]%1000000007;
	}

	cout << p;
	return 0;
}
