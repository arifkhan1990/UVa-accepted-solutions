#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,k,Q,K,m,p,ans;
    char ch;
    cin>>n;
    while(n--){
        cin>>ch>>m>>p;
        if(ch=='r'||ch=='Q')ans = min(m,p);
        else if(ch=='K')ans = ((m + 1)/2) * ((p + 1)/2);
        else if(ch == 'k') ans = (m * p + 1)/2;

        cout<<ans<<endl;
    }
    return 0;
}
