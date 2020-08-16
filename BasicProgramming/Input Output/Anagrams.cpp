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

		int c1[26] = {0}, c2[26] = {0};
		for(int i=0;str1[i]!='\0';i++)
			c1[str1[i]-'a']++;
		for(int i=0;str2[i]!='\0';i++) 
			c2[str2[i]-'a']++;
		
		int count=0;
		for(int i=0;i<26;i++) {
			count += abs(c1[i] - c2[i]);
		}

		cout << count << endl;

	}
	return 0;
}
