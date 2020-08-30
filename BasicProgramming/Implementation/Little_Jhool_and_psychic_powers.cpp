

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();
	int count=0,flag=1;
	for(int i=0;i<len-1;i++) {
		if(str[i] == str[i+1]) {
			count++;
			
		}
		else 
			count = 0;
		if(count == 5) {
				flag=0;
				cout << "Sorry, sorry!" ;
				break;
			}

	}
	if(flag==1)
	cout << "Good luck!" << endl;
}
