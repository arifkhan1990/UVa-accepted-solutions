#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long n,k;
    while(cin>>n && n){
            k=(int)sqrt(n);
           if (k*k==n) printf("yes\n");
           else printf("no\n");
    }
    return 0;
}
