//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	long int n;
	cin >> n;
	long int a[n],result=0;
	for(long int i=1;i<=n;i++) {
		cin >> a[i];
		if(i<=n/2) {
			while(a[i]>9)
				a[i]/=10;
		}

		else {
			a[i]%=10;
		}
		if(i%2==0)
			result+=a[i];
		else
			result-=a[i];
	}

	if(result%11==0)
		cout << "OUI";
	else
		cout << "NON";

	return 0; 
} 
