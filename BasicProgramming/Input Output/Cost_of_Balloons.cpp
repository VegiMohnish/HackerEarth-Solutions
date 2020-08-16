//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)	{
		int c1,c2;
		cin>>c1>>c2;
		int n;
		cin>>n;
		int a[n][2];
	for(int i=0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		a[i][0]=x;
		a[i][1]=y;
}
	int i_zero=0,j_zero=0;
	long one=0,two=0,ans;
	for(int i=0;i<n;i++) {
		if(a[i][0]==1) {
			one+=c1;
			two+=c2;
}
		if(a[i][1]==1) {
			one+=c2;
			two+=c1;
}
}

 	cout<<min(one,two)<<endl;

}

}

