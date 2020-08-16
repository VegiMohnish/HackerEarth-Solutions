//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	cin>>s;
	cin>>n;
	int i,j;
	
	for(i=0;i<s.size();i++){
		if((s[i]>='A'&&s[i]<='Z')){
			j = s[i]+n;
			while(j>90)
				j -=26;
			s[i] = j;
		}
		else if((s[i]>='a' && s[i]<='z')){
			j = s[i]+n;
			while(j>122)
				j -=26;
			s[i] =j;
		}
		else if(s[i]>='0' && s[i]<='9'){
			j = s[i]+n;
			while(j>57)
				j -=10;
			s[i] = j;
		}
	}
	cout << s;
	return 0;
}
