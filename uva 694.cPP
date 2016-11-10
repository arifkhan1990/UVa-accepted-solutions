#include<bits/stdc++.h>
using namespace std;

int main()
{
     long n,m,a;
    int i,j,k=0,l=0;
    while(cin>>n>>m){
            if(n<0 && m<0)break;
            a=n;
            k++;l=0;
        while(a<=m){
            if(a%2!=0)a =(a*3)+1,l++;
                else l++,a/=2;
                if(a == 1) {
                    l++;
                        break;
                }
        }
        printf("Case %d: A = %ld, limit = %ld, number of terms = %d\n",k,n,m,l);
    }
    return 0;
}
