//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

#include<bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    cin >> n;
    long int a[n];
    for(long int i=1;i<=n;i++) {
        cin >> a[i];
    }
    if(a[n]%10 == 0)
        cout << "Yes";
    else 
        cout << "No";

    return 0;
}
