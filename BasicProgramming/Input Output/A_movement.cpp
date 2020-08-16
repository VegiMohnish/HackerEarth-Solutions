//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    cin >> n;
    long int rem=0,val=0;
    rem = n%5;
    val = n/5;
    if(rem == 0)
        cout << val;
    else 
        cout << val+1;

    return 0;
	
}
