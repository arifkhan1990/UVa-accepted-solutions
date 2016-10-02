#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,b;
    cin>>n;
    for(int i1=0;i1<n;i1++){
         if (i1 > 0) printf("\n");
        cin>>a>>b;
        for (int i2 = 1; i2 <= b; i2++) {
         if (i2 > 1) printf("\n");
        for(i=1;i<=a;i++){
            for(j=1;j<=i;j++)
                cout<<i;

            cout<<endl;
        }
        for(i=a-1;i>0;i--){
            for(j=1;j<=i;j++)
                cout<<i;

            cout<<endl;
        }
    }
}
    return 0;
}
