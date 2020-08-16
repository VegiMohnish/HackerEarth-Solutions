//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n,q,l,r;
	cin >> n >> q;
	long long int a[n],ans;
	for(long int i=1;i<=n;i++) {
		cin >> a[i];
		a[i] = a[i] + a[i-1];

	}

	while(q--){
        cin >> l>> r;
        ans=a[r]-a[l-1];
        cout << ans/(r-l+1) << endl;
 
    }
	return 0;
}
