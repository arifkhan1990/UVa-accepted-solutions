#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c;
    while(scanf("%d",&n)==1){
            m=c=1;
        while(m!=0){
            m = m*10 + 1;
            m%=n;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
