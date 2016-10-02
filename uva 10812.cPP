#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,t;
    cin>> n;
    while(n--)
    {
        cin>>a>>b;

        if((a-b)< 0 || (a-b)%2) cout << "impossible" << endl;
             else cout << a - (a-b)/2 << " " << (a-b)/2 << endl;
    }
    return 0;
}
