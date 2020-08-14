//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char str[n];
		for(int i=1;i<=n;i++)
			cin >> str[i];
		int count = 0;
		for(int i=1;i<=n-1;i++) {
			if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
				if(str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u') {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
