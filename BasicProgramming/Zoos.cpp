//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram


#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	int x=0,y=0;
	int len = str.length();
	for(int i=0;i<=len;i++) {
		if(str[i] == 'z')
			x++;
		else if(str[i] == 'o')
			y++;
	}

	if (2*x == y)
		cout << "Yes";
	else
		cout << "No";
	return 0;
	
}

