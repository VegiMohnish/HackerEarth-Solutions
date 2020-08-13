//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
	int b,p;
	cin >> b >> p;

	if(b <= 23 && 500 < p < 1000)
		cout << "Take Medicine" << endl;
	else 
		cout << "Don't take Medicine";

	return 0;
}
