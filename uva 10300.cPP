#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ad[3],i,j;
    cin>>n;
    while(n--){
        int sum=0,k;
        cin>>k;
        while(k--){
            cin>>ad[0]>>ad[1]>>ad[2];
            sum += ad[0]*ad[2];
        }
        cout<<sum<<endl;
    }
    return 0;
}
