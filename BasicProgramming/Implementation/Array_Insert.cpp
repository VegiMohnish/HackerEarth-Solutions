//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,q;
	cin >> n >> q;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int op,x,y;
	while(q--) {
				long long int sum = 0;

		cin >> op >> x >> y;
		if(op == 1) 
			a[x] = y;
		
		else  {
			for(int i=x;i<=y;i++) {
				sum = sum + a[i];
			}
			cout << sum << endl;
		}
	}
	return 0;
}
