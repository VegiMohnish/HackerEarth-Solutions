//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram 


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	string str;
	while(t--) {
		cin >> str;
		long long int sum=0;
		long long int len = str.length();
		for(long long int i=0;i<len;i++) {
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u' ||
             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||  str[i] == 'O' ||  str[i] == 'U'){
                sum = sum + (len - i) * (i+1);
             }
		}
		cout << sum << endl;
	}
	return 0;
	
}
