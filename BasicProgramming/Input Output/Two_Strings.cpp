//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--) {
	string str1,str2;
	cin >> str1;
	cin >> str2;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	int flag=0;
	for(int i=0;str1[i] != '\0' && str2[i] != '\0';i++) {
		if(str1[i] != str2[i])
			flag = 1;
	}

	if(flag)
		cout << "NO" << endl;
	else 
		cout << "YES" << endl;
}
	return 0;
	
}
