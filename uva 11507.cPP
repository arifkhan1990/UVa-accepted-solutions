#include<bits/stdc++.h>
using namespace std;
int p[6][4]= {
    { 5, 4, 0, 0 },
    { 4, 5, 1, 1 },
    { 2, 2, 5, 4 },
    { 3, 3, 4, 5 },
    { 0, 1, 2, 3 },
    { 1, 0, 3, 2 }
};
string ad[]={"+y","-y","+z","-z","+x","-x"};

int main()
{
    int n,i,j,k,d,l,n1,d1;
    string a,s;
    while(cin>>n && n){
              d = 4;
        for(i=0;i<n-1;i++){
            cin>>s;
             if(s=="No")continue;

             if(s =="+y")d1=0;
             if(s == "-y")d1=1;
             if(s =="+z")d1=2;
             if(s == "-z")d1=3;
             if(s =="+x")d1=4;
             if(s == "-x")d1=5;

            d = p[d][d1];
        }
        cout<<ad[d]<<endl;
    }

    return 0;
}
