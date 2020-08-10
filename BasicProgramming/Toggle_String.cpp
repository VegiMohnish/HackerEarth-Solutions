//VEGI MOHNISH - Indian Institute of Information Technology Design and Manufacturing(IIITDM) Kancheepuram

/*
Problem - Toggle String

You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.

Constraints
 1<=|S|<= 100 , where S denotes the length of string S.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	for(int i=0;i<len;i++) {
		if(str[i]>='a' && str[i]<='z')
			str[i] = str[i] - 32;
		else if(str[i]>='A' && str[i]<='Z')
			str[i] = str[i] + 32;
	}
	cout << str << endl;
	return 0;

}
