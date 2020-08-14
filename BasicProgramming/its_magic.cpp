//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n;
	cin >> n;
	long long int a[n],sum=0;
	for(long int i=0;i<n;i++) {
		cin >> a[i];
		sum = sum + a[i];
	}
	int g=-1;
	for(long i=0;i<n;i++){
		if((sum-a[i])%7==0){
			if(g==-1){
				g=i;
			}
			else if(a[g]>a[i]){
				g=i;
			}
		}

    }
	cout << g;
	return 0;
}
