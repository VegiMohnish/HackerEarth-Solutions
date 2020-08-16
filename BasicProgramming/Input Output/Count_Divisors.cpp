//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	int l,r,k;
	int count=0;
	cin >> l >> r >> k;
	for(int i = l;i<=r;i++) {
		if (i%k == 0) {
			count++;
		}
	}
	cout << count ;
	return 0;
}
