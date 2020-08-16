//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	int x=0,y=0;
	for(int i=0;i<len;i++) {
		if(str[i] == 'L')
			x--;
		else if(str[i] == 'R')
			x++;
		else if(str[i] == 'D')
			y--;
		else if(str[i] == 'U')
			y++;
		
	}

	cout << x << " " << y;
	return 0;
}
