#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,c;
    int i;
	while(getline(cin,a)){
            if(a=="DONE")break;

     b="";
	for(i=0;i<a.size();i++)
          if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
            b.push_back(toupper(a[i]));

    string r(b.rbegin(),b.rend());
    if(b==r)cout << "You won't be eaten!" << endl;
    else   cout << "Uh oh.." << endl;
	}
    return 0;
}

