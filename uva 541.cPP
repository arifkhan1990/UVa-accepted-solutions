#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,k;
    int r[100],c[100];
  int l[101][101];
    while(cin>>n && n){

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
         cin>>k;
         l[i][j] = k;
         r[i]+=l[i][j];
         c[j]+=k;
}

    int r_e=0,c_e=0;
    bool b = true;
for(i=1;i<=n;i++){
    if(r[i]%2!=0)r_e=i,b=false;
        if(c[i]%2!=0)c_e=i,b=false;

        r[i]=0,c[i]=0;
}
if(!b){
    if(l[r_e][c_e]==1)
        l[r_e][c_e]=0;
    else l[r_e][c_e]=1;

}

if(b){
        cout<<"OK\n";
}else{
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
         r[i]+=l[i][j];

for(j=1;j<=n;j++)
    for(i=1;i<=n;i++)
         c[j]+=l[i][j];


bool p = true;
for(i=1;i<=n;i++){
    if(r[i]%2!=0 || c[i]%2!=0){
            cout<<"Corrupt\n";
    p = false;
    break;
    }
}
for(i=1;i<=n;i++) r[i]=0,c[i]=0;
if(p)
    printf("Change bit (%d,%d)\n",r_e,c_e);
}

}
    return 0;
}
