#include<bits/stdc++.h>
using namespace std;
int f91(int n){
    if(n<101)return f91(f91(n+11));
    else return n-10;
}
int main()
{
    int n,i,j,k,l,m;
    while(cin>>n && n){
        printf("f91(%d) = %d\n",n,f91(n));
    }
    return 0;
}

