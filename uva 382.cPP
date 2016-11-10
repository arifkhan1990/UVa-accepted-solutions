#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j,k,l,d,p,a;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n && n!=0){
            p=0;
        for(i=1;i<=n/2;i++){
                if(n%i==0)
                 p+=i;
        }
    cout << setw(5) << n << "  ";
        if(p==n)cout<<"PERFECT\n";
        if(p<n)cout<<"DEFICIENT\n";
        if(p>n)cout<<"ABUNDANT\n";

    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
