#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,h,l,m;
    cin>>n;
    for(j=1;j<=n;j++){
            h=l=0;
        cin>>m;
           int ad[m];
    for(i=0;i<m;i++){
        cin>>ad[i];
        if(i!=0)
            if(ad[i]>ad[i-1])h++;
            else if(ad[i]<ad[i-1])l++;

     }
     printf("Case %d: %d %d\n",j,h,l);
    }
    return 0;
}
