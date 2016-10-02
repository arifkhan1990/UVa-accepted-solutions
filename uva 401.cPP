#include<bits/stdc++.h>
using namespace std;
int m[100];
int main()
{
    m['A'] = 'A';m['B'] = ' ';m['C'] = ' ';m['D'] = ' ';
	m['E'] = '3';m['F'] = ' ';m['G'] = ' ';m['H'] = 'H';
	m['I'] = 'I';m['J'] = 'L';m['K'] = ' ';m['L'] = 'J';
	m['M'] = 'M';m['N'] = ' ';m['O'] = 'O';m['P'] = ' ';
	m['Q'] = ' ';m['R'] = ' ';m['S'] = '2';m['T'] = 'T';
	m['U'] = 'U';m['V'] = 'V';m['W'] = 'W';m['X'] = 'X';
	m['Y'] = 'Y';m['Z'] = '5';m['1'] = '1';m['2'] = 'S';
	m['3'] = 'E';m['4'] = ' ';m['5'] = 'Z';m['6'] = ' ';
	m['7'] = ' ';m['8'] = '8';m['9'] = ' ';
	string a,b,c;
    int i;
	while(cin>>a){
	b=a;
	//c=a;
	reverse(a.begin(),a.end());
	c=a;
	for(i=0;i<c.size();i++)
        c[i]=m[c[i]];

	if(a==b && b==c)cout << b<<" -- is a mirrored palindrome." << endl;
	if(a!=b && b!=c) cout << b<<" -- is not a palindrome." << endl;
	if(a==b && b!=c)cout << b<<" -- is a regular palindrome." << endl;
	if(a!=b && b==c)cout <<b<< " -- is a mirrored string." << endl;

	cout << endl;
	}
    return 0;
}
