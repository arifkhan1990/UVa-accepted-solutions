#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,k;
    int r[100],c[100];
  int l[101][101];
    while(cin>>n && n){
//take input
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
         cin>>k;
         l[i][j] = k;
         r[i]+=l[i][j];//calculate row sum
         c[j]+=k; // calculate column sum
}

    int r_e=0,c_e=0;
    bool b = true;
        //check error bit
for(i=1;i<=n;i++){
    if(r[i]%2!=0)r_e=i,b=false;
        if(c[i]%2!=0)c_e=i,b=false;

        r[i]=0,c[i]=0;
}
        //replace error bit by orginal value
if(!b){
    if(l[r_e][c_e]==1)
        l[r_e][c_e]=0;
    else l[r_e][c_e]=1;

}

if(b){
        cout<<"OK\n";
}else{
    //row sum
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
         r[i]+=l[i][j];
//column sum
for(j=1;j<=n;j++)
    for(i=1;i<=n;i++)
         c[j]+=l[i][j];

//check again error bit
bool p = true;
for(i=1;i<=n;i++){
    if(r[i]%2!=0 || c[i]%2!=0){
            cout<<"Corrupt\n";
    p = false;
    break;
    }
}
for(i=1;i<=n;i++) r[i]=0,c[i]=0;//initial row & column sum by 0
if(p)
    printf("Change bit (%d,%d)\n",r_e,c_e);
}

}
    return 0;
}
