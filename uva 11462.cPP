#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,i,j,t=0;
    int *ar = new int[2000001];
    int *br = new int[2000001];
    while(cin>>n && n)
    {
        t = 0;
        for (i = 1;i<=n;i++){
            cin >> a;
            ar[a]=ar[a]+1;
        }
    for(i=1;i<=n;i++)
        if(ar[i]>0)
                for(j=1;j<=ar[i];j++,t++)
                    br[t]=i;

         for(i=1;i<=n;i++)
            if(ar[i]>0)
                for(j=1;j<=ar[i];j++) ar[i]=0;

        for(i = 0;i<t;i++){
            if(i>0)cout<<" ";
                cout<<br[i];
        }
        cout<<endl;
    }
     delete []ar;
    return 0 ;
}
