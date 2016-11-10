/*                                         CODEMAN
                                        ARIF KHAN NIHAR
                                   Uva 10219- Find The ways!
                                       date -> 10/20/2016

                                        */
#include<bits/stdc++.h>
using namespace std;
#define logdiv(n) log(n)/log(10)
int main()
{
    double re;
    long n,k;
    while(cin>>n>>k){
            re = 0;
        for(int i=0 ; i<k ;i++){
            re += logdiv(n-i) - logdiv(i+1);
        }
        cout<<floor(re)+1<<endl;
    }
    return 0;
}
