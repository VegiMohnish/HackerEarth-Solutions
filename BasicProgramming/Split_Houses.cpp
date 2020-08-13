//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram


#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char c[n];
	for(int i=0;i<n;i++) 
		cin >> c[i];

	int flag = 0;
	for(int i=0;i<n-1;i++) {
		if(c[i] == 'H' && c[i+1] == 'H') {
			flag = 1;
			break;
		}
		else if(c[i] == '.')
			c[i] = 'B';
	}
	if(c[n-1] == '.')
		c[n-1] = 'B';
	if(flag == 0) {
		cout << "YES" << endl;
		for(int i=0;i<n;i++)
			cout << c[i];
	}

	else cout << "NO";
	

	
	return 0;
}
