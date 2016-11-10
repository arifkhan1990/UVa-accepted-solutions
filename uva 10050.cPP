#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j,i,k,l,p,l1=0;
    cin>>n;
    while(n--){
        cin>>m>>p;
        int ad[m],bd[p];
        for(i=1;i<=m;i++)ad[i]=0;

        for(i=1;i<=p;i++)cin>>bd[i];

        for(i=1;i<=p;i++)
           for(j=bd[i];j<=m;j+=bd[i])
            ad[j]=1;

            l=0;
        for(i=1;i<=m;i++)
            if(ad[i]==1 && (i-6)%7!=0 && i%7!=0)l++;

        cout<<l<<endl;
    }
    return 0;
}
