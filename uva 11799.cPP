#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,i,j=0,n;
    int ar[10001];
    cin >> n;
    while(n--)
    {
        c++;
        cin >> a;
        for(i=0;i<a;i++) cin>>ar[i];
        sort(ar,ar+i);

        cout<<"Case "<<c<<": "<<ar[a-1]<<endl;
    }
    return 0;
}

