#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k=0,l,a,b,j;
cin>>n;
    for(j=1;j<=n;j++){
        k=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)if((i&1)==1)k+=i;


         cout<<"Case "<<j<<": "<<k<<endl;
    }
    return 0;
}
