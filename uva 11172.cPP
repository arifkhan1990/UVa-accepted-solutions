#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j=0,n;
     long long p,q;
    cin >> n;
    while(n--)
    {
        cin >> p >> q;
        if(p<q)cout<<"<\n";
        if(p>q)cout<<">\n";
        if(p==q)cout<<"=\n";
    }
    return 0;
}
