#include<bits/stdc++.h>
using namespace std;
int main()
{
   long  a,n,i,j,k,l,ca=0,p,b;

    while(cin >> a >> b ){
              if (a==0 && b==0) break;
            ca=p=0;

        while(a!=0 || b!=0){
                k = a%10,a/=10,l = b%10,b/=10;
               if(k+l+p>9) ca++,p=1;
               else p=0;
              if ((a==0 || b==0) && p==0) break;
        }
        if(ca==0)cout<<"No carry operation.";
            else if(ca==1)cout<<"1 carry operation.";
              else cout<<ca<<" carry operations.";

              cout<<endl;
    }
    return 0 ;

}

