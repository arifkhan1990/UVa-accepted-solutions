/*                                                CODEMAN
                                              Arif Khan Nihar
                                      Uva 10019- Funny Encryption Method
                                             date -> 29/10/2016
                                             */
#include<bits/stdc++.h>
using namespace std;
int bin(int n){
    int k=0,l=0;
    while(n!=0){
        l = n%2,n/=2;
        if(l==1)k++;
    }
    return k;
}
int hex(int n1){
    int k1=0,l1=0,p=1;
    while(n1!=0){
        l1 = n1%10,n1/=10;
        k1 += l1*p;
        p *= 16;
    }
    k1 = bin(k1);
    return k1;
}
int main()
{
    int n,i,j;
    cin>>n;
    while(n--){
            cin>>i;
        cout<<bin(i)<<" "<<hex(i)<<endl;
    }
    return 0;
}
