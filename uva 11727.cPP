#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,i,j=0,n;
    int ar[3];
    cin >> n;
    while(n--)
    {
        c++;
        for(i=0;i<3;i++) cin>>ar[i];
        sort(ar,ar+i);
        cout<<"Case "<<c<<": "<<ar[1]<<endl;
    }
    return 0;
}
